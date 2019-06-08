

#ifndef SCACTRAP_H
# define SCACTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		void challenge(int attack);
	public:
		void challengeNewcomer();
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
};

#endif // !SCACTRAP_H