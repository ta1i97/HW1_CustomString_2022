#include <iostream>

using namespace std;

class TwoDigits {
private:
	char unity_Digit;
	char dozens_Digit;
public:
	TwoDigits(); // def ctor
	TwoDigits(const int num); // ctor
	TwoDigits(const char one, const char second); // ctor
	~TwoDigits(); // dtor
	int return_num_of_two_digits() const; // function that will return num of two digits.
	void replace(int);  // function that will replace/change the value.
	void print() const;
	void set_init(int); // initiolizing
	int get() const; 


};