#ifndef LOGGER_HPP
#define LOGGER_HPP
#include <iostream>
#include <string>
#include <fstream>

class Logger
{
public:
	void	log(std::string const& dest, std::string const & message);
	Logger(std::string name);
private:
    const std::string getDate() const;
	void	logToConsole(const std::string& message);
	void	logToFile(const std::string& message);
	std::string	makeLogEntry(std::string message);
	std::string _name;
};

#endif