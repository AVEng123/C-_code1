//Classes, Public and Private access modifiers
// No data hiding in structure...all members can be accessed
// 3 types defined below:

/*
1. Public ->
The public keyword is used to create public members (data and functions).
The public members are accessible from any part of the program.


2. Private ->
The private keyword is used to create private members (data and functions).
The private members can only be accessed from within the class.
However, friend classes and friend functions can access private members.


3. Protected -> Linked to inheritance
The protected keyword is used to create protected members (data and function).
The protected members can be accessed within the class and from the derived class.


public elements can be accessed by all other classes and functions.
private elements cannot be accessed outside the class in which they are declared, except by friend classes and functions.
protected elements are just like the private, except they can be accessed by derived classes.
*/

#include<iostream>
using namespace std;

class Employee{
    private:
        int a, b,c;


    public:
        int d,e;
        void setData(int a, int b, int c); // declaration
        void getData(){
            cout<< "The value of a is: "<< a << endl;
            cout<< "The value of b is: "<< b << endl;
            cout<< "The value of c is: "<< c << endl;
            cout<< "The value of d is: "<< d << endl;
            cout<< "The value of e is: "<< e << endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a =a1;
    b = b1;
    c =c1;
}

int main(){

    Employee Shubham;
   //Shubham.a = 12; this will give error as a is private so needs to be accessed only by member of Employee class
    Shubham.d = 5;
    Shubham.e =13;
    Shubham.setData(34,56,1);
    Shubham.getData();
    
    return 0;
}