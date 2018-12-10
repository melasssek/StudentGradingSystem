#include<iostream>
#include "studentGrading.h"
using namespace std;



int main() {

	cout<<"------Welcome to the grade and gpa calculator!------"<<endl;
		
	int listSize=0;	
	int courseNum=0;

	cout<<"Enter the number of courses "<<endl; 
	cin>>courseNum;
	
	Student *studentList= new Student[listSize];
	Course *courseList= new Course[courseNum];
	
	//asks user for studentInfo
	studentInfo(studentList);
		
	//asks user for courseInfo	
	courseInfo(courseList, courseNum);

	//calculations
	calcStudentGrade(courseList, courseNum);		

	return 0;
}
