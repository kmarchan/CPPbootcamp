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
	void meetZombie(std::string type, std::string name);
	Zombie();
	~Zombie();
};
#endif // !ZOMBIE_H


