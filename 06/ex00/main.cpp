#include <iostream>
#include <iomanip>
#include <cctype>

int main(int argc, const char** argv) {
    if (argc != 2) {std::cout << "this program takes only one argument" << std::endl; return 0;}
	std::string in = argv[1];
	std::cout << std::fixed << std::setprecision(1);
	try{
		int i = std::stoi(in);
		char c = i;
		if (std::isprint(c)) {
			std::cout << "char: " << c << std::endl;
		} else
		{
			std::cout << "char: " << "Non displayable" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << "char: Conversion is impossible" << std::endl;
	}

	try
	{
		int i = std::stoi(in);
		std::cout << "int: " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "int: Conversion is impossible" << std::endl;
	}

	try
	{
		float fl = std::stof(in);
		std::cout << "float: " << fl << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "float: Conversion is impossible" << std::endl;
	}

	try
	{
		double db = std::stod(in);
		std::cout << "double: " << db << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "double: Conversion is impossible" << std::endl;
	}
    return 0;
} 