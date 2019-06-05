#include <iostream>
#include "Zombie.hpp"

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

class ZombieHorde
{
private:
	int n;
	Zombie *hord;
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();
};

#endif // !ZOMBIE_HORDE_H
