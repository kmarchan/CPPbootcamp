
#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
private:
	void attack(int attack, std::string target);
public:
	void vaulthunter_dot_exe(std::string const & target);
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
};

#endif // !FRAGTRAP_H