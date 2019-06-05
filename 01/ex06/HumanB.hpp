#include <iostream>
#include "Weapon.hpp"

#ifndef HUMAN_B_H
# define HUMAN_B_H

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif // !HUMAN_B_H