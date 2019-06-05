#include <iostream>
#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout	<< this->name
				<< " the "
				<< this->type  
				<< " says \"braaaaaaaains!!!\"" << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " decomposed!" << std::endl;
}

void Zombie::meetZombie(std::string type, std::string name) {
	this->name = name;
	this->type = type;
}