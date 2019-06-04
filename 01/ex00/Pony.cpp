#include <iostream>
#include "Pony.hpp"

void Pony::sayHello() {
	std::cout << "Call " << this->name << std::endl;
    if (this->friendly) {
        std::cout << "you say: \"Hello " << this->name << "\"" << std::endl;
    } else {
    std::cout << this->name << " bites at your hand" << std::endl;
	}
}

Pony::Pony(std::string name, bool friendly)
{
    this->name = name;
    this->friendly = friendly;
}

Pony::~Pony()
{
	std::cout << this->name << " ran away!" << std::endl;
    return ; 
}
