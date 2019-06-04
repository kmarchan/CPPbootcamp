#include <iostream>
#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout	<< this->type
				<< " the "
				<< this->type  
				<< "braaaaaaaains!!!" << std::endl;
}

Zombie::Zombie(std::string type, std::string name)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie()
{
}
