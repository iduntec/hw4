#include "EE_Course.h"

EE_Course::EE_Course(int factor) // ***********************************
{
	factor_ = factor;
}

int EE_Course::getFactor() const
{
	return factor_;
}

bool EE_Course::setFactor(int factor)
{
	if (factor < 0 || factor > 100) return false;
	factor_ = factor;
	return true;
}


int EE_Course::getCourseGradeEE() {

	if ((Course::getCourseGrade() + factor_) > 100) return 100;
	else return Course::getCourseGrade();
}

