#include "../include/CustomString.h"

using namespace std;

int main(){
    const char* str = "hello"; // make it random/ delte initiolazing

    CustomString x(str);
    

    cout << "----input----" << endl;
    cout << "Enter a string: " << str <<endl; // TODO: delete str
    //cin >> str;
    cout << "\n" << str;
    cout << "----output----" << endl;
    cout << "ASCII value: "<<endl;
    //cin >> x.return_ASCII();
    cout << "Is palindrome? "<<endl;
    if(true){
        cout<< "Yes." << endl;
    }
    else {
        cout<< "No." <<endl;
    }
    cout<< "Is equal to 'Hello' ?" <<endl;
    cout << "Double string: " << endl;
    cout << "Char at index 7: "<< endl;
    cout << "Char at index -1: " << endl;
    cout << "Concatenated string ('world'): " << endl;




    return 0;
}