#include <iostream>
#include <string>

int main() {
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;

	std::string& stringREF = str;

	std::cout << "           Memory Addresses" << std::endl; 
	std::cout << "Addresses of str variable: " << &str << std::endl; 
	std::cout << "Addresses held by stringPTR: " << stringPTR << std::endl; 
	std::cout << "Addresses held by stringREF: " << &stringREF << std::endl;
	
	std::cout << "\n               Values" << std::endl;
	std::cout << "Value of str variable: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}