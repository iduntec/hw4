#ifndef _CS_COURSE_
#define _CS_COURSE_

#include "Course.h"

class CS_Course : public Course {

public:

	CS_Course(bool isTakef, string& courseBook);
	bool isTakef();
	string* getBook();
	bool setTakef(bool takefOrMagen);
	void setBook(string& courseBook);


protected:

	bool isTakef_;
	string* bookName_; //???????????? 

};


#endif // !_EE_COURSE_
