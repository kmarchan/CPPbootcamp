#include <iostream>
#include <fstream>

std::string string_replace(std::string& str, std::string& s1, std::string& s2)
{
	if (str.empty() || s1.empty()) {
		return str;
	}
	size_t pos = 0;
	std::string newstr = str;
	while ((pos = newstr.find(s1)) != std::string::npos)
	{
		newstr.replace(pos, s1.size(), s2);
		pos += s2.size();
	}
	return newstr;
}
int main(int argc, char const *argv[])
{
	if (argc != 4) { std::cout << "incorrect input" << std::endl; return 1; }
	std::string out;
	std::string fileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream myFile(fileName);
	if (myFile.fail()) {
		std::cout << "ERROR: read failed" << std::endl;
		return (0);
	}

	std::ofstream outFile(fileName + ".replace");
	while(std::getline(myFile, out)) {
		outFile << string_replace(out, s1, s2) + '\n';
	}
	std::cout<<"Replace completed."<<std::endl;
	return 0;
}

