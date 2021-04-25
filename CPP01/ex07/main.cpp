#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string s1, s2, dst, filename;
	if (argc != 4)
	{
		std::cout << "It takes 3 arguments" << std::endl;
		return 0;
	}
	filename = argv[1];
	std::ifstream ifs(filename);
	if (!ifs)
	{
		std::cout << filename << ": no such file\n";
		return 0;
	}
	filename += ".replace";
	std::ofstream ofs(filename);
	s1 = argv[2];
	s2 = argv[3];
	while (1)
	{
		std::getline(ifs, dst);
		if ((int)dst.find(s1) != -1)
			dst.replace(dst.find(s1), s2.length(), s2);
		ofs << dst;
		if (ifs.eof())
			break ;
		ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return 0;
}
