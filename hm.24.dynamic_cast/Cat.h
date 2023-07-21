#pragma once
#include "Animal.h"

class Cat : public Animal
{
public:
    Cat(string name, string type);
    void thankYou()const override;
};
