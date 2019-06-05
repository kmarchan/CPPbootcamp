#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon () {}

Weapon::~Weapon()
{
	std::cout << "The weapon has broken!" << std::endl;
}

const std::string &Weapon::getType() {
	return this->type;
}
 
void Weapon::setType(std::string type) {
	this->type = type;
}