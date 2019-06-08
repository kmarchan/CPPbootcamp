#include "FragTrap.hpp"
#include "ClapTrap.hpp"

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
			break;
		}
		case 1: {
			std::cout << this->name << " attacks " << target << "using a shoe" << std::endl;
			break;

		}
		case 2: {
			std::cout << this->name << " attacks " << target << "using a gun" << std::endl;
			break;

		}
		case 3: {
			std::cout << this->name << " attacks " << target << "using a hocky stick" << std::endl;
			break;

		}
		case 4: {
			std::cout << this->name << " attacks " << target << "using toothpaste" << std::endl;
			break;

		}
	}
}
