/*
Special member function with same name as of the class
It is used to initialize the objects of its class
It is automatically invoked whenever an object is created
It is used to initialise the objects of its class


1. It should be declared in the public section of the class
2. They do not have return types not even void
3. It can have default arguments
4. We can't refer to their address

*/

#include<iostream>
using namespace std;

class Complex{

        private:
            int a,b;

        public:
        //Creating a constructor
        Complex(void); //constructor declaration --> default constructor

        void printNum(){
            cout << "The number is: "<< a <<" + i" << b << endl;
        }
};

Complex :: Complex(void){
    a=1;
    b=0;
}

int main(){

    Complex c1;
    c1.printNum();

    return 0;
}