#pragma once

// STL
#include <memory>

// Qt
#include <QtWidgets/QWidget>
#include "GeneratedFiles/ui_PBMainWindow.h"

// PB
#include "PBProgramList.h"

class PBMainWindow : public QWidget
{
	Q_OBJECT

private:
	static const std::string PYTHON_EXE_PATH;

public:
	PBMainWindow(QWidget *parent = Q_NULLPTR);
	~PBMainWindow() override = default;

public slots:
	void SetFilesDirectory();
	void ReadFile();
	void RunProgram();

private:
	Ui::PBMainWindowClass ui;
	std::unique_ptr<PBProgramList> m_ProgramList = nullptr;
};
