#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name){
	std::cout << "A lazy " << name << " appears" << std::endl;
	this->name = name;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeDamage = 60;
	this->rangedDamage = 5;
	this->armorDamageReduction = 0;
}
NinjaTrap::NinjaTrap()
{
}

NinjaTrap::~NinjaTrap()
{
}

void NinjaTrap::ninjaShoebox(NinjaTrap){
	std::cout << "It's the ninja" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap){
	std::cout << "This is the clap" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap){
	std::cout << "This is a Scav" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap){
	std::cout << "This is a Frag" << std::endl;
}