#ifndef _Course_H_
#define _Course_H_

#include <vector>//???????????????????
#include <string>
#include <iostream>

using std::vector;//???????????????????????????

using std::string;

class Course {

public:

	~Course();
	Course(int courseNum, string& courseName, int hwQuen, double hwWeigh);
	int getNum() const;
	string getName() const;//??????????????????????????? how we check it returns a pointer?
	int getExamGrade() const;
	int getHwGrade(int hwSerialNumber) const;
	int getHwNum() const;
	double getHwWeigh() const;
	double getHwAverage();
	int getCourseGrade();
	bool setExamGrade(int testGrade);//returns TRUE/FALSE, this method should change stuff so it's not const
	bool setHwGrade(int hwSerial, int grade); 

protected:

	int courseNum_;
	string* courseName_; //???????????? 
	int hwQuan_;
	double hwWeigh_;
	int courseExamGrade_;
	int* hwGradesArr_; //????????????????

};

 #endif // _Course_H_