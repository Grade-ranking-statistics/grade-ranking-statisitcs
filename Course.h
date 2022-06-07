#ifndef COURSE_H 
#define COURSE_H

using namespace std;

class Course 
{
private:
	double gradeChinese; 
	double gradeMath;
	double gradeEnglish;
public: 
	Course(double, double, double);
	Course();
	void setChinese(double);
	double getChinese();
	void setMath(double);
	double getMath(); 
	void setEnglish(double);
	double getEnglish(); 
	double getAverage(); 
};
#endif
