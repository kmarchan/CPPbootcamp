#include <iostream>

#ifndef PONY_H
# define PONY_H

class Pony
{
private:
	std::string name;
	bool friendly;

public:
	Pony(std::string name, bool friendly);
	~Pony();
	void sayHello();
};

#endif
