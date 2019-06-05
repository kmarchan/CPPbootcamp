#include <iostream>

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie
{
private:
	std::string type;
	std::string name;
public:
	void announce();
	Zombie(std::string type, std::string name);
	~Zombie();
};

#endif