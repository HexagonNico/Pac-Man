#pragma once

#include <string>

class Console
{
private:
	std::string m_name;

public:
	Console(std::string name);
	void writeLine(std::string line);
};

