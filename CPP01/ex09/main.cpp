#include "Logger.hpp"

int main()
{
	Logger log("Logger.txt");

	//logToConsole or logToFile
	log.log("logToConsole", "Hello, world");
	log.log("logToFile", "Hello world");
}