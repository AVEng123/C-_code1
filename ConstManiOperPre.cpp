#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   /*int a = 34;
    cout << "The value of a is: "<< a << endl;
    a = 45;
    cout << "The value of a is: "<< a << endl;
     const  int a = 34;
    cout << "The value of a is: "<< a << endl;
    a = 45;
    .\ConstManiOperPre.cpp: In function 'int main()':
    .\ConstManiOperPre.cpp:14:9: error: assignment of read-only variable 'a'
     a = 45;
         ^~
    cout << "The value of a is: "<< a << endl;
    */ 

   // Manipulators --> control the display of data
   // ex. -> endl
   // another one in iomanip header -> setw
    /*
   int a =3, b=45, c=87654;
    cout << "The value of a is: "<< a << endl;
    cout << "The value of b is: "<< b << endl;
    cout << "The value of c is: "<< c << endl;

    cout << "The value of with setw a is: "<<setw(4) <<a << endl;
    cout << "The value of with setw b is: "<<setw(4) <<b << endl;
    cout << "The value of with setw c is: "<<setw(4) << c << endl;
    */

   //Operator Precedence
   int a=3, b=4;
   int c = a*5 + b-45 + 87 ;
   cout << c;
   
   //It does not run by BODMAS
   // precedence and associativity is used
   // check on cpp reference
    return 0;
}

