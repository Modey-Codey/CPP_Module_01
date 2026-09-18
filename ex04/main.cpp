#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	Replace replace(argv[1], argv[2], argv[3]);
	replace.execute();

	return 0;
}
