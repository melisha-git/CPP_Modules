#include <iostream>
#include <string>
#include <fstream>

int closeFile(std::string name, std::ifstream* ifs, std::string filename) {
    if (name == "ifs") {
        std::cout << filename << ": no such file\n";
    }
    else if (name == "ofs") {
        std::cout << filename << ": no create file\n";
        ifs->close();
    }
    return 0;
}

std::string replaceAll(std::string dst, std::string s1, std::string s2) {
    for (int i = 0; (i = dst.find(s1, i)) != std::string::npos;) {
        dst.replace(i, s1.length(), s2);
        i += s2.length();
    }
    return dst;
}

int main(int argc, char **argv) {
	std::string s1, s2, dst, filename;
	if (argc != 4) {
		std::cout << "It takes 3 arguments" << std::endl;
		return 0;
	}
	filename = argv[1];
	std::ifstream ifs(filename);
	if (!ifs.is_open()) {
		return closeFile("ifs", NULL, filename);
	}
	filename += ".replace";
	std::ofstream ofs(filename);
	if (!ofs.is_open()) {
        return closeFile("ofs", &ifs, filename);
    }
	s1 = argv[2];
	s2 = argv[3];
	while (1) {
		std::getline(ifs, dst);
        dst = replaceAll(dst, s1, s2);
		ofs << dst;
		if (ifs.eof())
			break ;
		ofs << std::endl;
	}
	ofs.close();
	ifs.close();
	return 0;
}
