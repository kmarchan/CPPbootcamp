#include <iostream>
#include <string>

void capitalizer (std::string in) {
    std::locale loc;
    for(std::string::size_type i = 0; i < in.length(); i++) {
        std::cout << std::toupper(in[i],loc);
    }
}

int main(int argc, char **argv)
{
    if (argc < 2){ 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    for(int i = 1; i < argc; i++) {
        capitalizer(argv[i]);
    }
}