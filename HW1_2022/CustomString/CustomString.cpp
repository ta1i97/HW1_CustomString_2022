#include "arrString.h"

arrString::arrString()
{
    numString = 0;
    *arrString = NULL;
}

arrString::arrString(string str)
{
    this->numString = length_String(str); // the length of numString = to the length of the new str.
    arrString = new char[numString];      // dinamy memory
    for (int i = 0; i < numString; i++)
    { // inserts in each index of arrString a new value of the new str.
        this->arrString[i] = str[i];
    }
}

arrString::arrString(const arrString &other)
{
    this->numString = other.numString;
    for (int i = 0; i < numString; i++)
    {
        *arrString = other.arrString[i];
    }
}

arrString::~arrString()
{
    delete[] arrString;
}

int arrString::get_numString()
{
    return numString;
}

char *arrString::get_arrString()
{
    return arrString;
}

void arrString::new_arrString(int length, char *arr)
{
    this->numString = length; // the length of numString = to length.
    arr = new char[length];   // new memory for the new arr.
    for (int i = 0; i < length; i++)
    { // inserts in each index of arrString a new value of the new arr.
        this->arrString[i] = arr[i];
    }
}

void arrString::print()
{
    cout << "String: " << this->arrString << endl;
    cout << "Length: " << this->numString << endl;
}

int arrString::return_ASCII()
{
    int sum = 0;
    for (int i = 0; this->arrString[i] != '\0'; i++)
    {
        sum += (int)arrString[i]; // char can be int and that is why no cast needed.
    }
    return sum;
}

string arrString::convert_String()
{
    string newStr;
    int i = 0; // index
    while (this->arrString[i])
    {                                 // while it points in to an index
        newStr += this->arrString[i]; // takes newStr and adding a "letter" of char.
        i++;
    }
    return newStr;
}

bool arrString::palindrome()
{
    int first = 0, end = numString - 1;
    while (this->arrString[first])
    {
        if (arrString[first] != arrString[end])
        {
            return false;
        }
        first++;
        end--;
    }
    return true;
}

bool arrString::compare_obj(string obj)
{
    int index = 0;
    while (this->arrString[index])
    {
        if (arrString[index] != obj[index])
        {
            return false;
        }
        index++;
    }
    return true;
    /*
    if(this-> arrString == obj)
        return true;
    return false;
    */
}

char arrString::index_Value(int index)
{
    if (index == '\0' || index < 0 || index > numString)
    {
        cout << "Error! The index you have requested is corrapted. " << endl;
        return this->arrString[0];
    }
    return this->arrString[index];
}

void arrString::doubleString(){
    char* other = new char[numString]; // הקצאת זיכרון 
    for(int i = 0; i < numString; i++){
    this->arrString[i] = other[i];  // השמה של המילים
    }
    strcat(arrString, other); // קריאה לפונקציית השירשור
    delete [] other; // שיחרור
    this->numString *= 2; // עידכון גודל הסטרינג
}

void arrString::sub(char letter){
    int index = 0, jump = 0;
    
    while(this->arrString[index]){
        if(this->arrString[index+jump] == c){
            while(this->arrString[index+jump] == c){
                this->size -= 1;
                jump++;
            }
        }

        this->arrString[index] = this->arrString[index+jump];
        index++;
    }
    
    char *newStr = new char[this->size];
    myStrcpy(newStr, this->arrString);
    delete [] this->arrString;
    char *arrString = new char[this->size];
    myStrcpy(arrString, newStr);
    delete[] newStr;

}

char* arrString::strcat(char *dest, const char *src)
{
    char *newString = dest + length_char(dest);
    // the newString begins in the 5th index because the variable "dest" points in its first index, 
    //and the + length moving into the last index of the variable dest.
    /*
    "hello"
    h[0] + 5 = 5
    newString[5]  = o
    */
    while (*src){
        *newString++ = *src++;
    }
    *newString = '\0';
    return dest;
}

int length_String(string str)
{ // Function that returning the "length" of a string.
    int counter = 0;
    for (; str[counter] != '\0'; counter++)
        return counter;
}

int length_char(char *str)
{ // Function that returning the "length" of a string.
    int counter = 0;
    for (; str[counter] != '\0'; counter++)
        return counter;
}