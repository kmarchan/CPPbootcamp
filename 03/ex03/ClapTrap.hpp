#include <iostream>

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap
{
protected:
	std::string name; 
	unsigned int hitPoints;
	unsigned int maxHitPoints;
	unsigned int energyPoints;
	unsigned int maxEnergyPoints;
	unsigned int level;
	unsigned int meleeDamage;
	unsigned int rangedDamage;
	unsigned int armorDamageReduction;
public:
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
};

#endif // !CLAPTRAP_H