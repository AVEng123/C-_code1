/*
Ambiguity Resolution in Inheritance
same function in all three classes...and derived is made from inheriting
from both then

Ambiguity is resolved using scope resolution operator
*/

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "This is from Base1" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "This is from Base2" << endl;
    }
};

class Derived: public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1 ::greet();  // this is how ambiguity is resolved
            Base2 :: greet();
        }
};

int main()
{
    Base1 b1;
    Base2 b2;
    Derived d1;

    b1.greet();

    b2.greet();
     d1.greet();
     /*     d1.greet(); --> for this syntax
                In function 'int main()':
            .\AmbiquityInheritance.cpp:41:9: error: request for member 'greet' is ambiguous
                d1.greet();
                    ^~~~~
            .\AmbiquityInheritance.cpp:22:10: note: candidates are: void Base2::greet()
                void greet()
                    ^~~~~
            .\AmbiquityInheritance.cpp:13:10: note:                 void Base1::greet()
                void greet()
                    ^~~~~
     */

    return 0;
}