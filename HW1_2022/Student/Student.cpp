#include "Student.h"

Student::Student() {
	strcpy(fullName, "Unknown");
	strcpy(id, "0000000000");
	int numYears = 0;
	int numCourse = 0;
	char** Courses = NULL;
	int* grades = NULL;
	bool scholaship = false;
}

Student::Student(char* newName, char* newID, int numOfYears, int numOfCourses, char newScholar, char **newCourses, int *newGrade):Student(){
	if (strlen(newName) < 51) {
		setName(newName);
	}

	if (strlen(newID) == 10) {
		setID(newID);
		for (int i = 0; i < 10; i++) {
			if (isdigit(newID[i]) == 0) {
				strcpy(id, "0000000000");
				break;
			}
		}
	}

	if (numOfYears > 0 && numOfCourses > 0) {
		setnumYears(numOfYears);
		setnumCourse(numOfCourses);
		Courses = new char* [numOfCourses];
		grades = new int[numOfCourses];
		setCourses(newCourses);
		setGrade(newGrade);
	}
	else if (numOfYears > 0) {
		setnumYears(numOfYears);
	}
	else if (numOfCourses > 0) {
		setnumCourse(numOfCourses);
	}
	
	if (newScholar == 'Y') {
		cout << "Here\n";
		setScholarship(true);
	}
}

Student::Student(const Student& other) {
	strcpy(fullName, other.fullName);
	strcpy(id, other.id);
	numYears = other.numYears;
	numCourse = other.numCourse;
	copyArr(other);
	scholarship = other.scholarship;
}

Student::~Student(){
	delete[] Courses;
	delete[] grades;
}


void Student::setName(char* name) {
		strcpy(fullName, name);
}

void Student::setID(char* newID) {
		strcpy(id, newID);
}

void Student::setnumYears(int numOfYears) {
	numYears = numOfYears;
}

void Student::setnumCourse(int numOfCourses) {
	numCourse = numOfCourses;
}

void Student::setGrade(int* newGrade) {
	for (int i = 0; i < numCourse; i++) {
		grades[i] = newGrade[i];
	}
}

void Student::setCourses(char** newCourses) {
	for (int i = 0; i < numCourse; i++) {
		if (strlen(newCourses[i]) < 51) {
			Courses[i] = new char[strlen(newCourses[i])];
			strcpy(Courses[i], newCourses[i]);
		}
	}
}

void Student::setScholarship(bool boolean) {
	scholarship = boolean;
}

bool Student::getScholarship() {
	return scholarship;
}

void Student::copyArr(const Student& other) {
	Courses = new char* [numCourse];
	grades = new int[numCourse];
	for (int i = 0; i < numCourse; i++) {
		Courses[i] = new char(*(other.Courses[i]));
		grades[i] = other.grades[i];
	}
}

char* Student::getName() {
	return fullName;
}
char* Student::getID() {
	return id;
}
int Student::getnumYears() {
	return numYears;
}
int Student::getnumCourses() {
	return numCourse;
}

int* Student::getGrades() {
	return grades;
}

char** Student::getCourses() {
	return Courses;
}

float Student::avg() {
	float sum = 0;
	for (int i = 0; i < numCourse; i++) {
		sum += grades[i];
	}
	return sum / numCourse;
}

int Student::culcPrice() {
	int price = 0;
	price = (3000 * numCourse) + (1000 * numYears);
	if (scholarship == true) {
		price -= 2000;
	}
	return price;
}

void Student::printData() {
	cout << "----output----" << endl;
	cout << "Student Name: " << fullName << endl;
	cout << "ID: " << id << endl;
	cout << "Years of study: " << numYears << endl;
	cout << "Grade sheet: " << endl;
	for (int i = 0; i < numCourse; i++) {
		cout << Courses[i] << " - " << grades[i] << endl ;
	}
	cout << "Scholarship: ";
	if(scholarship == true) {
		cout << 'Y' << endl;
	}
	else {
		cout << 'N' << endl;
	}
	cout << "Tuition Fees: " << culcPrice() << endl;
}
