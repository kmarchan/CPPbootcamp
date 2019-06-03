#include <iostream>
#include <string>

int main()
{
    std::string in;
    std::cout << "What is your request: Options are ADD, SEARCH and EXIT" << std::endl;
    while (in != "EXIT")
    {
        std::cin >> in;
        if (in == "ADD") {
            std::cout << "add" << std::endl;
        }
        if (in == "SEARCH") {
            std::cout << "search" << std::endl;
        }
    }
}