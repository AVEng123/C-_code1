#include<iostream>
//There are two types of header files
//1. System header files - comes with compiler
//2. User defined header files - comes with programmer
// the syntax is include"this.h" --> now this.h is a file
// to be present in current directory
//always find c++ reference header files

using namespace std;

int main()
{
    int a =13, b=27;
    cout << "Operators in C++ "<< endl;
    cout << "Following are the types of operators in C++"<< endl;
    //Arthimetic 
   /* cout <<"The value of a+b is" << a+b << endl;
    cout <<"The value of a-b is" << a-b << endl;
    cout <<"The value of a*b is" << a*b << endl;
    cout <<"The value of a/b is" << a/b << endl;
    cout <<"The value of a%b is" << a%b << endl;
    cout <<"The value of a++ is" << a++ << endl;
    cout <<"The value of a-- is" << a-- << endl;
    cout <<"The value of ++a is" << ++a << endl;
    cout <<"The value of --a is" << --a << endl;*/

    //Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d ='a';

    //Comparison Operators
   /* cout <<"The value of a==b is" << (a==b) << endl;
    cout <<"The value of a!=b is" << (a!=b) << endl;
    cout <<"The value of a>=b is" << (a>=b) << endl;
    cout <<"The value of a<=b is" << (a<=b) << endl;
    cout <<"The value of a>b is" << (a>b) << endl;
    cout <<"The value of a<b is" << (a<b) << endl;*/

    //Logical Operators
    cout <<"The value of logical and (a==b)&& (a<b) is: " << ((a==b)&&(a<b)) << endl;
    cout <<"The value of logical or (a==b) || (a<b) is: " << ((a==b)||(a<b)) << endl;
    cout <<"The value of logical not !(a==b) is: " << (!(a==b)) << endl;


    return 0;
}
