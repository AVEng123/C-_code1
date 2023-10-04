// data type which holds the address of other data types


#include<iostream>
using namespace std;
int main(){
    
    int a =3;
    int* b = &a; // here b is the pointer
    cout << "Address of a" << &a << endl;
    cout << "Address of a" << b << endl;

    cout << "The value at address b is: " << *b << endl;
    
    // & --> (address-of) operator
    // * --> (value-at) de-reference operator

    //Pointer-to-Pointer --> basically a pointer which 
    //stores the address of a pointer
    int** c = &b;
    cout << "Address of b is: " << &b << endl;
    cout << "Address of b is: " << c << endl;

    cout << "The value at address c is: " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is: " << **c << endl;    

    return 0;
}