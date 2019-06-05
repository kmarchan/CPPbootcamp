#include <iostream>

class ZombieEvent
{
	private:
		std::string type;
	public:
		ZombieEvent();
		~ZombieEvent();
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name); 
		Zombie *randomChump(void);
};

