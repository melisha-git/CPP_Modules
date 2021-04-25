#include "Logger.hpp"

Logger::Logger(std::string name) : name(name)
{
}

void	Logger::logToConsole(const std::string& message)
{
	std::cout << message << std::endl;
}

void Logger::logToFile(const std::string& message)
{
	std::ofstream ofs(this->name);

	ofs << message << std::endl;
	ofs.close();
}

std::string	Logger::makeLogEntry(std::string message)
{
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	std::string date;

	date = std::to_string((timeinfo->tm_mday) / 10) + std::to_string((timeinfo->tm_mday) % 10);
	date += ".";
	date += std::to_string((timeinfo->tm_mon + 1) / 10) + std::to_string((timeinfo->tm_mon + 1) % 10);
	date += ".";
	date += std::to_string(timeinfo->tm_year + 1900);
	date += " ";
	return date + message;
}

void	Logger::log(std::string const& dest, std::string const& message)
{
	std::string foratMessage;
	void (Logger::*fcnPtr[2])(const std::string&) = {&Logger::logToFile, &Logger::logToConsole};
	foratMessage = Logger::makeLogEntry(message);
	if (dest.compare("logToConsole") == 0)
		(this->*fcnPtr[1])(foratMessage);
	else if (dest.compare("logToFile") == 0)
		(this->*fcnPtr[0])(foratMessage);
}