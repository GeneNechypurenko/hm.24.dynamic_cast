#pragma once

#include "Animal.h"

class Dog: public Animal
{
public:
	Dog(string name, string type);
	void thankYou() const override;
};

