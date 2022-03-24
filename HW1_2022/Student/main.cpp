#include "Student.h"
using namespace std;

int main() {
	char name[MAX_SIZE], newID[MAX_SIZE], boolean[MAX_SIZE], temp[MAX_SIZE], numCou[MAX_SIZE], years[MAX_SIZE],grade[MAX_SIZE];
	char** courses = NULL;
	int yearNum, * grades = NULL;

	cout << "----input----" << endl;

	cout << "Enter Name:" << endl; // ENTER NAME
	cin.getline(name, MAX_SIZE);

	cout << "Enter ID:" << endl; // ID NUMBER
	cin.getline(newID, MAX_SIZE);

	cout << "Years of study: " << endl; // YEARS OF STUDY
	cin.getline(years, MAX_SIZE); 
	yearNum = atoi(years); 

	cout << "Scholarship(Y\\N)" << endl; // SCHOLARSHIP
	cin.getline(boolean, MAX_SIZE);

	cout << "Number of courses studied: " << endl;
	cin.getline(numCou, MAX_SIZE);
	int coursesNum = atoi(numCou);
	if (coursesNum > 0) {
		courses = new char* [coursesNum];
		grades = new int[coursesNum];
		for (int i = 0; i < coursesNum; i++) {
			cout << "Course name: " << endl;
			cin.getline(temp, 51);
			if (strlen(temp) < 51) {
				courses[i] = new char[strlen(temp)];
				strcpy(courses[i], temp);
				strcpy(temp, "\0");
				cout << "Set grade: " << endl;
				cin.getline(grade, MAX_SIZE);
				grades[i] = atoi(grade);
			}
			else {
				cout << "Please insert a name less than 51 characters\n";
				i--;
			}
		}
	}

	Student x(name, newID, yearNum, coursesNum, boolean[0], courses, grades);
	x.printData();

	/*char name[] = "tam";
	char newID[] = "1234567890";
	int years = 1;
	int numCou = 3;
	int grade[] = {100 ,100, 100};
	char** courses = new char* [3];
    courses[0] = new char[3];
	strcpy(courses[0], "CPP");
	courses[1] = new char[1];
	strcpy(courses[1], "C");
	courses[2] = new char[3];
	strcpy(courses[2], "OOP");
	*/
	return 0;
}

