
#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap:public ClapTrap
{
private:

public:
	NinjaTrap(std::string name);
	NinjaTrap();
	~NinjaTrap();
};


#endif // !NINJATRAP_H