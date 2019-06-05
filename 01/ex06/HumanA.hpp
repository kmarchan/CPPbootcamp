#include <iostream>
#include "Weapon.hpp"

#ifndef HUMAN_A_H
# define HUMAN_A_H

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif // !HUMAN_A_H