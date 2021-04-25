#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony {
public:
	Pony(std::string name = "default", std::string color = "blue", std::string breed = "british");
	~Pony();
	std::string getName() const;
	const std::string getBreed() const;
	const std::string getColor() const;
	void setName(std::string);
private:
	std::string _name;
	std::string _breed;
	std::string _color;
};

#endif