#include "Header Files/PBProgramList.h"

// STL
#include <utility>
#include <filesystem>

// PB
#include "Header Files/CustomError.h"

const std::string PBProgramList::PROGRAM_LIST_NAME = "Program List";

namespace fs = std::filesystem;

PBProgramList::PBProgramList(std::string parentRoot, QObject * parent)
	: QAbstractListModel(parent)
	, m_ParentRoot(std::move(parentRoot))
{
	LoadFileList();
}

int PBProgramList::rowCount(const QModelIndex&) const
{
	return m_ProgramFileList.size();
}

QVariant PBProgramList::data(const QModelIndex& index, int role) const
{
	if (!index.isValid())
	{
		return QVariant();
	}

	if (index.row() >= m_ProgramFileList.size())
	{
		return QVariant();
	}

	if (role == Qt::DisplayRole || role == Qt::EditRole || role == FileRoles::FileNameRole)
	{
		return QString::fromStdString(m_ProgramFileList.at(index.row()).fileName);
	}
	else if (role == FileRoles::FilePathRole)
	{
		return QString::fromStdString(m_ProgramFileList.at(index.row()).filePath);
	}
	return QVariant();
}

QVariant PBProgramList::headerData(int, Qt::Orientation, int role) const
{
	if (role != Qt::DisplayRole)
	{
		return QVariant();
	}

	return QString::fromStdString(PROGRAM_LIST_NAME);
}

Qt::ItemFlags PBProgramList::flags(const QModelIndex& index) const
{
	if (!index.isValid())
	{
		return Qt::ItemIsEnabled;
	}

	return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}

bool PBProgramList::setData(const QModelIndex& index, const QVariant& value, int role)
{
	if (index.isValid() && role == Qt::EditRole && !(index.row() >= m_ProgramFileList.size() || index.row() < 0))
	{
		m_ProgramFileList[index.row()] = PBFile(*reinterpret_cast<const PBFile*>(value.data()));
		emit dataChanged(index, index, { role });
		return true;
	}
	return false;
}

void PBProgramList::AddFileName(const PBFile fileName)
{
	if (std::find(begin(m_ProgramFileList), end(m_ProgramFileList), fileName) != end(m_ProgramFileList))
	{
		return;
	}

	beginInsertRows(QModelIndex(), m_ProgramFileList.size(), m_ProgramFileList.size());
	m_ProgramFileList.push_back(std::move(fileName));
	endInsertRows();
}

void PBProgramList::LoadFileList()
{
	if (!fs::exists(m_ParentRoot))
	{
		FileNotFoundError e;
		e.Where("PBProgramList::LoadFileList");
		e.What("File " + m_ParentRoot + " does not exist");
		throw e;
	}

	for (auto & target : fs::recursive_directory_iterator(m_ParentRoot))
	{
		const std::string fileName = fs::absolute(target).string();
		if (std::string::npos != fileName.find(".py"))
		{
			PBFile file;
			file.filePath = fileName;
			file.fileName = fs::absolute(target).filename().string();
			AddFileName(file);
		}
	}
}
