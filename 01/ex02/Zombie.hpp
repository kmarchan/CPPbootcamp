#include <iostream>

class Zombie
{
private:
	std::string type;
	std::string name;
public:
	void announce();
	void meetZombie();
	Zombie(std::string type, std::string name);
	~Zombie();
};
