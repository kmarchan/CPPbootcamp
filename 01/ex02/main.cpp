#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int main(void)
{
	Zombie	*zombie_1;
	Zombie	*zombie_2;
	ZombieEvent event;

	event.setZombieType("Screecher");
	zombie_1 = event.randomChump();
	delete zombie_1;
	event.setZombieType("Crawler");
	zombie_2 = event.randomChump();
	delete zombie_2;
	return (0);
}

//	clang++ -Wall -Werror -Wextra Zombie.cpp ZombieEvent.cpp main.cpp