#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const &target) {
	std::cout	<< this->name 
				<< " shoots something at "
				<< target
				<< " for "
				<< this->rangedDamage
				<< " damage"
				<< std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout	<< this->name 
				<< " kicks "
				<< target
				<< " for "
				<< this->rangedDamage
				<< std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
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

void ScavTrap::beRepaired(unsigned int amount) {
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

void ScavTrap::challengeNewcomer() {
	ScavTrap::challenge(std::rand() % 4);
}

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name){
	std::cout << "A lazy " << name << " appears" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeDamage = 20;
	this->rangedDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << " has been killed" << std::endl;
}

void ScavTrap::challenge(int attack) {
	switch (attack) {
		case 0: {
			std::cout << this->name << " challenges you to attack using a bat" << std::endl;
			break;
		}
		case 1: {
			std::cout << this->name << " challenges you to attack using a broom" << std::endl;
			break;

		}
		case 2: {
			std::cout << this->name << " challenges you to attack using a shovel" << std::endl;
			break;

		}
		case 3: {
			std::cout << this->name << " challenges you to attack using a horse shoe" << std::endl;
			break;

		}
		case 4: {
			std::cout << this->name << " challenges you to attack using toilet seat" << std::endl;
			break;
		}
	}
}
