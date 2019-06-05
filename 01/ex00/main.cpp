#include <iostream>
#include "Pony.hpp"


void ponyOnTheHeap() {
	Pony *Jill = new Pony("Jill", false);
	Jill->sayHello();
	delete(Jill);
};

void ponyOnTheStack() {
	Pony Jack("Jack", true);
	Jack.sayHello();
};

int main() {
	ponyOnTheHeap();
	ponyOnTheStack();
}