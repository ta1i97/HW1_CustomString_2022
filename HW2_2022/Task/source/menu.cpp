#include "menu.h"
using namespace std;

menu::menu(): obj1(0,0), obj2(0), boolian(NULL) {}// def ctor

menu::~menu(){ // dtor
	// delete
}

void menu::main_menu() {  // main menu of 3 options.
	static int choice = 0;
	while(choice != 3){
		cout << "*******************~ M e n u ~ **********************" << endl;
		cout << "1. TwoDigits\n2. boolArray\n3. Exit" << endl;
		cout << "*****************************************************" << endl;
		cin >> choice;
		switch (choice) {
			case 1:
				TwoDigitsMethod();
				break;
			case 2:
				BoolArrayMethod();
				break;
			case 3:
				cout << "Have a nice day!" << endl;
				choice = 3;
				break;
			default:
				cout << "Wrong input\n";
				break;
		}
	} 
}

void menu::TwoDigitsMethod() { 
	char one, two;
	cout << "Please enter 2 numbers between 1 to 9: " << endl;
	cin >> one;
	cin >> two;
	if (((one - '0') >= 0 && (one - '0') < 10) && ((two - '0') >= 0 && (two-'0') < 10)) {
		obj1.set_init((one - '0') + ((two - '0') * 10));
		int random;
		cout << "Please enter a number. " << endl;
		cin >> random;
		obj2.set_init(random);
		menu_TwoDigits(); // menu for TwoDigit Method
	}
	else {
		cout << "Not a valid choice, try again! " << endl;
		TwoDigitsMethod(); // if not standin in the condition it will return to it again till the user gets it right.
	}
}

void menu::BoolArrayMethod() { 
	menu_boolArray();    // menu of boolArray Method.
}

void menu::menu_TwoDigits() {   // menu for TwoDigit Method of 4 options.
	static int choice = 0;
	int sum = 0, num;
	do {
		cout << "*******************~ M e n u ~ **********************" << endl;
		cout << "Please choose your next step." << endl;
		cout << "1. Update obj.\n2. Sum of obj.\n3. Print Obj.\n4. Exit." << endl;
		cout << "*************** ~ T w o D i g i t s ~ ***************" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Please enter the new digits\n";
			cin >> num;
			obj2.set_init(num);
			break;
		case 2:
			sum = (obj1.return_num_of_two_digits()) + (obj2.return_num_of_two_digits());
			cout << sum << endl;
				break;
		case 3:
			cout << "First two digit number: " << obj1.return_num_of_two_digits() << endl;
			cout << "Second two digit number: " << obj2.return_num_of_two_digits() <<endl;
			break;
		case 4:
			cout << "Have a nice day!" << endl;
			break;
		default:
			cout << "Not a Valid Choice. \n"
				<< "Choose again.\n";
			break;
		}
	} while (choice != 4);
}

void menu::menu_boolArray() { // menu of boolArray Method with 6 options.
	int choice;
	int index,x ;
	bool var;
	do {
		cout << "*******************~ M e n u ~ **********************" << endl;
		cout << "Please choose your next step." << endl;
		cout << "1. Update Size.\n2. Update Value.\n3. Change Value.\n4. Get Value.\n 5. Print.\n6. Exit." << endl;
		cout << "*************** ~ B o o l A r r a y ~ ***************" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			int size;
			cout << "Please enter a size." << endl;
			cin >> size;
			this->boolian.update_arrSize(size);
			break;
		case 2:
			this->boolian.init();

			break;
		case 3:
			cout << "Please enter an index and a bool variable." << endl;
			cout << "Index: ";
			cin >> index;
			cout << "\nbool: ";
			cin >> var;
			cout << endl;
			this->boolian.update_value(index , var);
			break;
		case 4:
			cout << "Please enter an index." << endl;
			cout << "Index: ";
			cin >> index;
			x = this->boolian.return_value(index);
			if(x != -1)
				cout << "The value in index: " << index << " is " << x << "." << endl;
			break;
		case 5:
			this->boolian.print();
			break;
		case 6:
			cout << "Have a nice day!" << endl;
			break;
		default:
			cout << "Not a Valid Choice. \n"
				<< "Choose again.\n";
			break;
		}
	} while (choice != 6);
}