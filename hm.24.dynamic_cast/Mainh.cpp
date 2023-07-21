#include <iostream>
#include <string>

#include "Cat.h"
#include "Dog.h"
#include "Veterinarian.h"

using namespace std;

int main()
{
    Veterinarian vet;

    Animal* animal1 = new Cat("Felix", "cat");
    Animal* animal2 = new Dog("Rex", "dog");

    vet.treatAnimal(animal1);
    vet.treatAnimal(animal2);

    delete animal1;
    delete animal2;
    return 0;
}
