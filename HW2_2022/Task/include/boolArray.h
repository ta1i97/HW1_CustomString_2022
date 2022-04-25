#include <iostream>
using namespace std;

class boolArray {
private:
	bool* arr;
	int size;
public:
	boolArray(); // def ctor
	boolArray(const int); // ctor
	~boolArray(); // dtor
	void update_arrSize(const int); // updating the size as the size of the integer.
	void init();
	void update_value(const int, const bool); // updating the value inside the array[index].
	int return_value(const int) const;
	void print()const;
};