#include <iostream>
#include "Pony.hpp"


int main() {

    Pony Jack("Jack", true);
    Pony *Jill = new Pony("Jill", false);

    Jack.sayHello();
	Jill->sayHello();

	delete(Jill);
}