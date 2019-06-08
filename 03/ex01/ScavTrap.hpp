

#ifndef SCACTRAP_H
# define SCACTRAP_H
#include <iostream>

class ScavTrap
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
		void challenge(int attack);
	public:
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer();
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
};

#endif // !SCACTRAP_H