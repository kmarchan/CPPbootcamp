#include <iostream>

int main() {

	std::string variable = "HI THIS IS BRAIN";
	
	std::string *ptr = &variable;
	std::string &ref = variable;

	std::cout << "Pointer: " << *ptr << std::endl;
	std::cout << "Reference: " << ref << std::endl;

	return 0;
}
