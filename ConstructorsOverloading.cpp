/*
Constructor Overloading

*/

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(void);
    Complex(int);
    Complex(int, int);

    void printNum()
    {
        cout << "The number is: " << a << " + i" << b << endl;
    }
};

Complex ::Complex(void)
{
    a = 0;
    b = 0;
}
Complex ::Complex(int x)
{
    a = x;
    b = 0;
} 
Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{


    Complex c1(4, 6);
    c1.printNum();

    
    Complex c2 = Complex(3);
    c2.printNum();

    return 0;
}