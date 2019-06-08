#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const &target) {
	std::cout	<< this->name 
				<< " throws something at "
				<< target
				<< " for "
				<< this->rangedDamage
				<< " damage"
				<< std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout	<< this->name 
				<< " slaps "
				<< target
				<< " for "
				<< this->rangedDamage
				<< std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
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

void FragTrap::beRepaired(unsigned int amount) {
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

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->energyPoints < 25) {
		std::cout << "Vault hunter has fallen asleep" << std::endl;
	}
	else {
		FragTrap::attack(rand() % 4, target);
		this->energyPoints -= 25;
	}
}

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name){
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

FragTrap::~FragTrap()
{
	std::cout << this->name << " has been deconstructed" << std::endl;
}

void FragTrap::attack(int attack, std::string target) {
	switch (attack) {
		case 0: {
			std::cout << this->name << " attacks " << target << "using a grenade" << std::endl;
		}
		case 1: {
			std::cout << this->name << " attacks " << target << "using a shoe" << std::endl;

		}
		case 2: {
			std::cout << this->name << " attacks " << target << "using a gun" << std::endl;

		}
		case 3: {
			std::cout << this->name << " attacks " << target << "using a hocky stick" << std::endl;

		}
		case 4: {
			std::cout << this->name << " attacks " << target << "using toothpaste" << std::endl;
		}
	}
}
