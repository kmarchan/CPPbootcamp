#include <iostream>

#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	const std::string &getType();
	void setType(std::string type);
};

#endif // !WEAPON_H
