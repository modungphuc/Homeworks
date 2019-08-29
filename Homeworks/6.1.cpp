#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::string line;
	unsigned int countLine = 0;
	unsigned int countWord = 0;
	std::ifstream count("count.txt", std::ios::in);
	if (!count.is_open()) {
		std::cout << "exit" << std::endl;
		exit(1);
	}
	while (!count.eof()) {
		std::getline(count, line);
		++countLine;
		if (!std::isspace(line.at(0))) ++countWord;
		for (unsigned int i = 0; i < line.length(); ++i) {
			if (std::isspace(line.at(i)) && !std::isspace(line.at(i + 1))) ++countWord;
		}
	}
	std::cout << countLine << " : " << countWord;
	count.close();
	return 0;
}