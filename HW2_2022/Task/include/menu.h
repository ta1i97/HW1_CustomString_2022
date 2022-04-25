#include "TwoDigits.h"
#include "boolArray.h"

class menu {
private:
	TwoDigits obj1;
	TwoDigits obj2;
	boolArray boolian;
	void menu_TwoDigits(); // function for menu for TwoDigits
	void menu_boolArray(); // function for menu for boolArray
public:
	menu(); // def ctor
	~menu(); //  dtor
	void main_menu(); // menu of the program
	void TwoDigitsMethod(); // menu of TwoDigits
	void BoolArrayMethod(); // menu of boolArray
};