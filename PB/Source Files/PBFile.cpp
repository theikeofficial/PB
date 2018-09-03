#include "Header Files/PBFile.h"

// STL
#include <fstream>
#include <numeric>
#include <vector>

PBFile::PBFile()
{
}

PBFile::~PBFile()
{
}

std::string PBFile::ReadFile(const PBFile& fileObj)
{
	return ReadFile(fileObj.filePath);
}

std::string PBFile::ReadFile(const std::string& fileName)
{
	std::ifstream programFile(fileName);
	if (programFile.is_open())
	{
		std::vector<std::string> codeLines;
		std::string oneLine;

		while (std::getline(programFile, oneLine))
		{
			codeLines.push_back(oneLine);
			codeLines.emplace_back("\n");
		}

		std::string text = std::accumulate(
			codeLines.cbegin(), codeLines.cend(), std::string(""));
		return text;
	}

	return "";
}
