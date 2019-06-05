#include <iostream>
#include "Brain.hpp"

#ifndef HUMAN_H
# define HUMAN_H

class Human
{
private:
	Brain brain;
public:
	Human();
	~Human();
	std::string identify();
	Brain &getBrain();
};

#endif // !HUMAN_H