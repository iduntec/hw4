#ifndef _Peron_H_
#define _Person_H_

#include "Course.h"

class Person {

public:
	
	Person(int ID, string* name);
	int getID() const;
	string* getName() const;

protected:
	
	int ID_;
	string* Name_;
}


#endif // _Peron_H_