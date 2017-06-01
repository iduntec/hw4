#include "Person.h"

Person::Person(int ID, string* name)
{
	Name_ = new string(name);
	ID_ = ID;
}

Person::~Person()
{
	delete[] Name_;
}
int Person::getID() const
{
	return ID_;
}

string* Person::getName() const
{
	return Name_;
}


