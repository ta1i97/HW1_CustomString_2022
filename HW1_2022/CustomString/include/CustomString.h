#include <iostream>

using namespace std;

class CustomString{
private:    
    int numString;
    char* arrString;
public:

    CustomString(); // default ctor
    CustomString(string); // regular ctor
    CustomString(CustomString const&); // copy ctor
    ~CustomString(); // dtor
    int get_numString();   // get()
    char* get_arrString(); // get()
    void new_arrString(int, char*); // updating into a new string it's length and values.
    void print(); // printing the string.
    int return_ASCII(); // returning the ASCII of each 'letter'.
    string convert_String(); // changing current obj to obg of string.
    bool palindrome(); // if string is polindrom.
    bool compare_obj(string); // compare between objects.
    char index_Value(int); // return the value of the index.
    void doubleString(); // multiplies the string length and updating it.
    void sub(char); // removing the letter from the string.
    char* strcat(char*, const char*); // adding a string to new string. tali, dubovski >>>> talidubovski.
};

int length_String(string);
int length_char(char*);





