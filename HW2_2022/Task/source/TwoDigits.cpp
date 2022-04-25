#include "TwoDigits.h"


TwoDigits::TwoDigits() { // def ctor
	this->unity_Digit = 0;
	this->dozens_Digit = 0;
}

TwoDigits::TwoDigits(int num) {
	set_init(num); // reuse
	/*
	this->unity_Digit = (num % 10) + '0';
	num = 198648 , will return only the remainder == unity_Digit == 8. + converting to char.
	num /= 10;                    // num = 198648/10 = 19864
	this->dozens_Digit = (num % 10) + '0';  
	num = 19864 , will return only the remainder == 4.  + converting to char.
	*/
}

TwoDigits::TwoDigits(const char one, const char second) { 
	this->unity_Digit = one;
	this->dozens_Digit = second;
}

TwoDigits::~TwoDigits() { // dtor
	// delete
}

int TwoDigits::return_num_of_two_digits() const{
	int newNum = 0; // initiolizing new number.
	newNum = (((this->dozens_Digit- '0') * 10) + (this->unity_Digit- '0')); // turning two numbers into two digit value.
	return newNum;
}

void TwoDigits::replace(const int num) { // changeing/replacing the value by usuing a "set" function.
	set_init(num);
}

void TwoDigits::print() const{ // printing the new two digits value
	cout << return_num_of_two_digits()  << endl;
}

void TwoDigits::set_init(int num) {
	this->unity_Digit = (num % 10)+'0'; // num = 198648 , will return only the remainder == unity_Digit == 8.
	num /= 10;                    // num = 198648/10 = 19864
	this->dozens_Digit = (num % 10)+'0';  // num = 19864 , will return only the remainder == 4.
}

int TwoDigits::get() const {
	int n = 0;
	n = ((this->dozens_Digit * 10) + this->unity_Digit);
	return n;
}