#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony
{
public:
	Pony();
	Pony(std::string name);
	Pony(std::string name, std::string color);
	Pony(std::string name, std::string color, std::string breed);
	~Pony();
	std::string getName();
	std::string getBreed();
	std::string getColor();
	void setName(std::string);
private:
	std::string name;
	std::string breed;
	std::string color;
};

#endif