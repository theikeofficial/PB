#pragma once

// STL
#include <string>

class PBFile
{
public:
	PBFile();
	~PBFile();

	static std::string ReadFile(const PBFile & fileObj);
	static std::string ReadFile(const std::string & fileName);

	std::string fileName = "";
	std::string filePath = "";

	bool operator==(const PBFile & other) const
	{
		return filePath == other.filePath;
	}
};

