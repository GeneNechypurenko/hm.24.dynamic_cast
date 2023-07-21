#include "Dog.h"

Dog::Dog(string name, string type)
	:
	Animal(name, type)
{}

void Dog::thankYou() const
{
	cout << name << " the " << type << " thanks you for treating with happy 'Woof!'" << endl;
}
