#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::setZombieType(std::string type) {
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *newZombie = new Zombie(this->type, name);
	return newZombie;
}

Zombie *ZombieEvent::randomChump() {
	std::string randNames[5] = {"Steve", "Brett", "Chris", "Bob", "Stan"};
	std::string name = randNames[rand() % 4];
	return (newZombie(name));
}

