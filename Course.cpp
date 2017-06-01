#include "Course.h"

// constructor
Course::Course(int courseNum, string & courseName, int hwQuan, double hwWeigh)
{
	courseNum_=courseNum;
	courseName_ = new string(courseName); //courseName_ is a feild of the class named 'Course'
	hwQuan_ = hwQuan;
	hwWeigh_ = hwWeigh;
	courseExamGrade_ = 0; ///??????????????? initilization

	if (hwQuan < 1) {
		hwGradesArr_ = NULL;
	}
	else hwGradesArr_ = new int[hwQuan];

}

Course::~Course()
{
	delete []courseName_;
	delete []hwGradesArr_;
}


int Course::getNum() const
{
	return courseNum_;
}

string Course::getName() const
{
	return *courseName_; //check for problems with string ?????????????????????????????????
}

int Course::getExamGrade() const
{
	return courseExamGrade_;
}

int Course::getHwGrade(int hwSerialNumber) const
{
	if (hwGradesArr_ == NULL) return -1;

	return  hwGradesArr_[hwSerialNumber];
}

int Course::getHwNum() const
{
	return hwQuan_;
}

double Course::getHwWeigh() const
{
	return hwWeigh_;
}

double Course::getHwAverage() 
{
	if (hwQuan_ == 0)
	{
		hwWeigh_ = 0;
		return 0;
	}

	int sum = 0;
	for (int i = 0; i < hwQuan_; i++)
	{
		sum = sum + hwGradesArr_[i];
	}
		return sum / hwQuan_;
}

int Course::getCourseGrade()
{
	int grade = (int)((1 - hwWeigh_)*courseExamGrade_ + hwWeigh_*getHwAverage());
	return grade;
}
bool Course::setExamGrade(int testGrade)
{
	if (testGrade > 100 || testGrade < 0) return false;
	courseExamGrade_ = testGrade;
	return true;
}

bool Course::setHwGrade(int hwSerial, int grade)
{
	if (hwSerial > hwQuan_ || hwSerial < 0 || grade > 100 || grade < 0) return false;
	hwGradesArr_[hwSerial] = grade;
	return true;
}

