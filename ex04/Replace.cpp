#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
	: filename(filename), s1(s1), s2(s2) {}

Replace::~Replace() {}

void Replace::execute() {
	if (s1.empty()) {
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return;
	}

	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return;
	}

	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "Error: Could not creat output file " << outputFilename << std::endl;
		inputFile.close();
		return;
	}

	std::string line;
	while (std::getline(inputFile, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outputFile << line;
		if (!inputFile.eof()) {
			outputFile << std::endl;
		}
	}

	inputFile.close();
	outputFile.close();
}
