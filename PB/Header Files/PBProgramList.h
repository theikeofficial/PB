#pragma once

// STL
#include <string>
#include <vector>

// Qt
#include <QAbstractListModel>

// PB
#include "PBFile.h"

class PBProgramList : public QAbstractListModel
{
	static const std::string PROGRAM_LIST_NAME;

public:
	typedef std::vector<PBFile> FileList;

	enum FileRoles
	{
		FileNameRole = Qt::UserRole + 1,
		FilePathRole
	};

	PBProgramList(std::string parentRoot, QObject *parent = nullptr);
	~PBProgramList() = default;

	// Reading operations
	int rowCount(const QModelIndex &parent = QModelIndex()) const override;
	QVariant data(const QModelIndex &index, int role) const override;
	QVariant headerData(int section, Qt::Orientation orientation,
		int role = Qt::DisplayRole) const override;

	// Writing operations
	Qt::ItemFlags flags(const QModelIndex &index) const override;
	bool setData(const QModelIndex &index, const QVariant &value,
		int role = Qt::EditRole) override;
	void AddFileName(const PBFile fileName);

	// Getters
	FileList ProgramFileList() const
	{
		return m_ProgramFileList;
	}

private:
	void LoadFileList();

	FileList m_ProgramFileList;

	const std::string m_ParentRoot;
};
