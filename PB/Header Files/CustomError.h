#pragma once

// STL
#include <exception>
#include <string>

class CustomError : public std::exception
{
public:
	CustomError() = default;
	~CustomError() override = default;

	void What(const std::string & what)
	{
		m_What = what;
	}
	const std::string & What() const
	{
		return m_What;
	}

	void Where(const std::string & where)
	{
		m_Where = where;
	}
	const std::string & Where() const
	{
		return m_Where;
	}

protected:
	std::string m_What;
	std::string m_Where;
};

class FileNotFoundError : public CustomError
{
public:
	FileNotFoundError() = default;
	~FileNotFoundError() override = default;
};