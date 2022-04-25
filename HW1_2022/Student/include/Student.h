#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <fstream>
#define MAX_SIZE 100

using namespace std;

class Student {
private:
	char fullName[51];
	char id[10];
	int numYears;
	int numCourse;
	char** Courses;
	int* grades;
	bool scholarship;

public:
	Student(); // def ctor
	Student(char* fullName, char* id, int numYears, int numCourses, char newScholar, char** newCourses, int* newGrade);
	Student(Student const& other); // reference ctor
	~Student(); // dtor
	void setName(char*);
	void setID(char*);
	void setnumYears(int numOfYears);
	void setnumCourse(int numOfCourses);
	void setGrade(int*);
	void setCourses(char**);
	void setScholarship(bool);
	void copyArr(const Student& other);
	char* getName();
	char* getID();
	int getnumYears();
	int getnumCourses();
	int* getGrades();
	char** getCourses();
	bool getScholarship();
	float avg();
	int culcPrice();
	void printData();
};







