/*
Friend Classes and Member Friend function
extending the concept of friend function.
How one member of a class will become the friend function in another class

*/
#include <iostream>
using namespace std;

//We will give forward declaration
class Complex;

class Calculator{

    public:
    int add(int a, int b){
        return (a+b);
    }

    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
   // {
    //    return (o1.a+o2.a); //Point2: Even after creating a friend function we see the error --> we move it before complex class

        //Point3: We now need to declare the function and then define after the class

        /* Point1: 
         In member function 'int Calculator::sumRealComplex(Complex, Complex)':
         error: 'int Complex::a' is private within this context
         return (o1.a+o2.a);
                    
         note: declared private here
         int a, b;
         
         error: 'int Complex::a' is private within this context
         return (o1.a+o2.a);
                         
         note: declared private here
        int a, b;
         Now need to give access        
        */
   // }  
};



class Complex
{
private:
    int a, b;

    //Individual declaring function as friends
    friend int Calculator :: sumRealComplex(Complex, Complex);
    friend int Calculator :: sumImgComplex(Complex, Complex);

    // This is just two functions...now if we need 100 functions then instead of friend function we make a friend class
    //syntax is
    //friend class Calculator


public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    

    void printNum(void)
    {
        cout << "The number is:" << a << " + i" << b << endl;
    }
};

int Calculator :: sumRealComplex(Complex o1, Complex o2){
     return (o1.a+o2.a);
}
//This needs to be defined here just before main otherwise will give error

int Calculator :: sumImgComplex(Complex o1, Complex o2){
     return (o1.b+o2.b);
}

int main()
{

    Complex c1, c2, sum;
    c1.setNum(12, 16);
    c1.printNum();

    c2.setNum(25, 38);
    c2.printNum();

    Calculator calc;
    cout << "The sum of real part of complex numbers are: " << calc.sumRealComplex(c1,c2) << endl;
    cout << "The sum of img part of complex numbers are: " << calc.sumImgComplex(c1,c2) << endl;


    return 0;
}