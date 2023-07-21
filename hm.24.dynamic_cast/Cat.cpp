#include "Cat.h"

Cat::Cat(string name, string type)
	:
	Animal(name, type)
{}

void Cat::thankYou() const
{
	cout << name << " the " << type << " thanks you for treating with gentle 'Meow!'" << endl;
}
