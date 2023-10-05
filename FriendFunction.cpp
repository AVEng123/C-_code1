/*
Properties of Friend function:
1. Not in the scope of class 
2. Non-member function can access private variables and methods
3. It can't be called from the object of the class,e.x., c1.sumComplex() == Invalid
4. Can be invoked without the help of any object
5. Usually contains objects as arguments
6. Can be declared inside public or private section of the class
7.It can't access the members directly by their names and need object_name.member_name to access any member
*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    //Add friend function here to remove the below
    friend Complex sumComplex(Complex o1, Complex o2);

    void printNum(void)
    {
        cout << "The number is:" << a << " + i" << b << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    //This is just a foreign function and is trying to access the private data
    //Hence it needs to take permission --> via freind function
    Complex o3;

    //This statement creates confusion
    // cout<< a;
    o3.setNum((o1.a + o2.a), (o1.b + o2.b));
    /*
        note: declared private here
         int a,b;
               ^
        error: 'int Complex::b' is private within this context
        o3.setNum((o1.a+o2.a),(o1.b+o2.b));
                                    ^
        note: declared private here
         int a,b;
        To avoid this error we will declare friend function within complex class
    */
    return o3;
}

int main()
{

    Complex c1, c2, sum;
    c1.setNum(2, 6);
    c1.printNum();

    c2.setNum(5, 8);
    c2.printNum();

    sum = sumComplex(c1, c2);
    sum.printNum();

    return 0;
}