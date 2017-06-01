#include "CS_Course.h"

CS_Course::CS_Course(bool isTakef, string & courseBook)
{

}

bool CS_Course::isTakef()
{
	return isTakef_;
}

string * CS_Course::getBook()
{
	return bookName_;
}

bool CS_Course::setTakef(bool takefOrMagen)
{
	isTakef_ = takefOrMagen;
	return true;
}

void CS_Course::setBook(string & courseBook)
{
	bookName_ = &courseBook;
}
