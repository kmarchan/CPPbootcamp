#include <iostream>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->n = N;
	this->hord = new Zombie[N];
	for (int i = 0; i < N;  i++)
	{
			std::string randNames[5] = {"Steve", "Brett", "Chris", "Bob", "Stan"};
			std::string name = randNames[rand() % 4];
			std::string randType[5] = {"Crawler", "Screecher", "Bloater", "Spitter", "Decomposed"};
			std::string type = randType[rand() % 4];
			this->hord[i].meetZombie(type, name);
	}
	this->announce();
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->hord;
}

void ZombieHorde::announce() {
	for (int i = 0; i < this->n ; i++)
	{
		this->hord[i].announce();
	}
}
