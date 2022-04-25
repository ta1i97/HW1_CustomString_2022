#include "boolArray.h"

boolArray::boolArray() { // def ctor
	this->size = 0;
	arr = NULL; 
}

boolArray::boolArray(int size) { // ctor
	update_arrSize(size);   // reuse
}

boolArray::~boolArray() { //dtor
	// delete
}

void boolArray::update_arrSize(const int size) { // Function that is updating the size of the array.
	if (arr != NULL) {
	delete[] arr;
	}
	this->size = size;
	arr = new bool[size];
	for (int i = 0; i < size; i++) {
		arr[i] = false;
	}
}

void boolArray::init() { // Function that initiolizing the values the user choose.
	cout << "Enter a number 0 or 1: " << endl;
	int temp;
		for (int i = 0; i < size; i++) {
			cin >> temp;
			if (temp == 0 || temp ==1) { 
				update_value(i, temp); // correct input + reuse
			}
			else { // incorrect input
				i--; // go back one
			}
	}
	
}

void boolArray::update_value(const int index, const bool var) { // updating the value inside the array
	if (index >= 0 && index < size) {
	this->arr[index] = var;
	}
	else {
		cout << "Error, this index doesn't exist. " << endl; // prints error if not standing in the condition.
	}
}

int boolArray::return_value(const int index) const{ // chacks if standing in the condition, if it does it returns the value.
	if (index >= 0 && index < size) {
		return this->arr[index];
	}
	else {
		cout << "Error, this index doesn't exist. " << endl;
		return -1;
	}
}

void boolArray::print() const{ // prints the array
	cout << "Array: { ";
	for (int i = 0; i < size; i++) {
		if (this->arr[i] == 0) {

			cout << "F\t";
		}
		else {
			cout << "T\t";
		}
	}
	cout << "}" << endl;
}