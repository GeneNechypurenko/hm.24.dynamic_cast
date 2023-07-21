#include "Veterinarian.h"

void Veterinarian::treatAnimal(Animal* animal)
{
    if (Cat* cat = dynamic_cast<Cat*>(animal))
    {
        cat->thankYou();
    }
    else if (Dog* dog = dynamic_cast<Dog*>(animal))
    {
        dog->thankYou();
    }
}
