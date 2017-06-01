#ifndef _EE_COURSE_
#define _EE_COURSE_

#include "Course.h"

class EE_Course : public Course {

public :
	
	EE_Course(int factor) :Course()courseNum, string& courseName, int hwQuen, double hwWeigh);//*******************
	int getFactor() const;
	bool setFactor(int factor);
	int getCourseGradeEE();

protected:

	int factor_ = 0;

};


#endif // !_EE_COURSE_
