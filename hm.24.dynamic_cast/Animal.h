#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string name;
	string type;

public:
	Animal(const string name, const string type);
	virtual void thankYou() const = 0;
};