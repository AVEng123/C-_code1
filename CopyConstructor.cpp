/*
Copy Constructor --> makes the copy of another object
Takes the reference of itself --> &obj
Even if we comment the copy constructor which is defined below
then also it will work becoz a compiler by default gives a copy constructor


*/

#include <iostream>
using namespace std;

class Number{
    private:
        int a;
    
    public:
        Number(){
            a=0;
        }
        Number(int num){
            a = num;
        }
        Number(Number &obj){
            cout << "Copy constructor called "<< endl;
            a = obj.a;
        }
        void display(){
            cout << "The number is: " << a << endl;
        }
};

int main()
{
    Number x,y(23),z(45),z4;
    x.display();
    y.display();
    z.display();

    //z1 should exactly resemble z or x or y
    Number z1(x);
    z1.display();

    Number z2(y);
    z2.display();

    Number z3(z);
    z3.display();

    z4 = z3; // here copy constructor is not called because we are only doing assignment
    z4.display();

    Number z5 = y;// copy constructor will always be called even as we have declared the object
    z5.display(); 

    return 0;
}