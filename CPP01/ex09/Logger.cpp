#include "Logger.hpp"

Logger::Logger(std::string name) : _name(name){
}

void	Logger::logToConsole(const std::string& message)
{
	std::cout << message << std::endl;
}

void Logger::logToFile(const std::string& message)
{
	std::ofstream ofs(this->_name);

	if (!ofs.is_open()) {
	    std::cout << "no create file\n";
	    return ;
	}
	ofs << message << std::endl;
	ofs.close();
}

const std::string Logger::getDate() const {
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    std::string date;

    date = std::to_string((timeinfo->tm_mday) / 10) + std::to_string((timeinfo->tm_mday) % 10);
    date += ".";
    date += std::to_string((timeinfo->tm_mon + 1) / 10) + std::to_string((timeinfo->tm_mon + 1) % 10);
    date += ".";
    date += std::to_string(timeinfo->tm_year + 1900);
    date += " ";
    return date;
}

std::string	Logger::makeLogEntry(std::string message)
{
	return (getDate() + message);
}

void	Logger::log(std::string const& dest, std::string const& message)
{
	std::string formatMessage;
	void (Logger::*fcnPtr[2])(const std::string&) = {&Logger::logToFile, &Logger::logToConsole};
	formatMessage = Logger::makeLogEntry(message);
	if (dest.compare("logToConsole") == 0)
		(this->*fcnPtr[1])(formatMessage);
	else if (dest.compare("logToFile") == 0)
		(this->*fcnPtr[0])(formatMessage);
}