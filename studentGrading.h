#ifndef STUDENTGRADING_H
#define STUDENTGRADING_H
#include<string>
using namespace std;

const int MaxNameLen = 128;

struct Student
{
	char name [MaxNameLen];
	unsigned long id;
	//unsigned long numCourse;
};

struct Course
{
	unsigned short credit;
	
	int attendance; 
	int assignment;
	int quiz;
	int exam;
	string nameCourse [];

};

void studentInfo(Student studentList[]);
void courseInfo(Course courseList[],int courseNum);
int calcStudentGrade(Course courseList[], int courseNum);

#endif //STUDENTGRADING_H
