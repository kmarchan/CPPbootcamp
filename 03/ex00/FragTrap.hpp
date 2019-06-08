#include <iostream>

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class FragTrap
{
private:
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
	void vaulthunter_dot_exe(std::string const & target);
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
};

#endif // !FRAGTRAP_H