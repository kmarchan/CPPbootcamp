#include "ClapTrap.hpp"


void ClapTrap::rangedAttack(std::string const &target) {
	std::cout	<< this->name 
				<< " throws something at "
				<< target
				<< " for "
				<< this->rangedDamage
				<< " damage"
				<< std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {
	std::cout	<< this->name 
				<< " slaps "
				<< target
				<< " for "
				<< this->rangedDamage
				<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout	<< this->name 
				<< " takes "
				<< amount
				<< " damage"
				<< std::endl;
	if (amount - this->armorDamageReduction >= 0) {
	this->hitPoints -= (amount - this->armorDamageReduction);
	std::cout << "Health is now " << this->hitPoints << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout	<< this->name 
				<< " is healed for "
				<< amount
				<< std::endl;
	if (this->hitPoints + amount <= this->maxHitPoints) {
		this->hitPoints += amount;
	}
	else {this->hitPoints = this->maxHitPoints; }
	std::cout << "Health is now " << this->hitPoints << std::endl;
}

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name){
	std::cout << "A wild " << name << " appears" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeDamage = 30;
	this->rangedDamage = 20;
	this->armorDamageReduction = 5;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " has been deconstructed" << std::endl;
}
