#include "Header Files/PBMainWindow.h"

// STL
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;

// Qt
#include <QFileDialog>
#include <QColorDialog>

// PB
const std::string PBMainWindow::PYTHON_EXE_PATH = ".\\python-3.7.0-embed-amd64\\python.exe";

PBMainWindow::PBMainWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QPalette p = ui.m_ConsoleTE->palette();
	p.setColor(QPalette::Base, Qt::black);
	p.setColor(QPalette::Text, Qt::white);
	ui.m_ConsoleTE->setPalette(p);
}

void PBMainWindow::SetFilesDirectory()
{
	const auto fileName = QFileDialog::getExistingDirectory(this, tr("Open Folder"), 
		QString::fromStdString(fs::current_path().string()));
	if ("" == fileName)
	{
		return;
	}

	m_ProgramList.reset(new PBProgramList(fileName.toStdString(), ui.m_ProgramFileListLV));
	ui.m_ProgramFileListLV->setModel(m_ProgramList.get());
}

void PBMainWindow::ReadFile()
{
	auto pSelectionModel = ui.m_ProgramFileListLV->selectionModel();
	if (pSelectionModel->hasSelection())
	{
		auto index = pSelectionModel->currentIndex();
		auto data = m_ProgramList->data(index, PBProgramList::FileRoles::FilePathRole);

		auto text = PBFile::ReadFile(data.toString().toStdString());
		ui.m_EditorTE->setText(QString::fromStdString(text));
	}
}

void PBMainWindow::RunProgram()
{
	std::string programCode = ui.m_EditorTE->toPlainText().toStdString();
	auto tmpDir = fs::temp_directory_path();
	fs::create_directory(tmpDir / "PB");

	std::string programFileName = tmpDir.string() + "/PB/temp_program.py";
	std::ofstream programFile(programFileName);
	if (programFile.is_open())
	{
		programFile << programCode;
	}
	programFile.close();

	auto oldPath = fs::current_path();
	fs::current_path(tmpDir / "PB");

	std::string command = oldPath.string() + PYTHON_EXE_PATH + " " + fs::absolute(programFileName).string() + " 1> output.msg 2>&1";

	std::system(command.c_str());

	programFileName = tmpDir.string() + "/PB/output.msg";
	const auto consoleEditorText = PBFile::ReadFile(programFileName);
	
	ui.m_ConsoleTE->setPlainText(QString::fromStdString(consoleEditorText));

	fs::current_path(oldPath);
	fs::remove_all(tmpDir / "PB");
}
