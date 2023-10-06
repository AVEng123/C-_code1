/*
We want the member to be private but can be inherited 
via protected

For a protected member:
                Public derivation       Private derivation      Protected derivation
1. Private        Not inherited            Not inherited               Not inherited
2. Protected      protected                 private                    Protected
3. Public         public                    private                    Protected

*/


#include <iostream>
using namespace std;

class Base{
    protected:
        int a; // it is like private but can be inherited
    private:
        int b;
    public:
        Base(){
            a = 10;
            b = 20;
        }
        int display(){
            cout << "This is of Base class" << endl;
            return a;
        }

};

class Derived : protected Base{

    public:
        int display(){
            cout << "This is of Derived class" << endl;
            return a;
        }

};

int main()
{   
    Base b;
    Derived d;
   // cout << d.a << endl; // --> this line will give the below error
    /*
                    .\ProtectedAccessModifier.cpp: In function 'int main()':
            .\ProtectedAccessModifier.cpp:38:15: error: 'int Base::a' is protected within this context    
                cout << b.a << endl;
                        ^
            .\ProtectedAccessModifier.cpp:19:13: note: declared protected here
                    int a; // it is like private but can be inherited

                the same happens for code: cout << d.a << endl;
    */

   cout << b.display() << endl;
   cout << d.display() << endl;

    return 0;
}


