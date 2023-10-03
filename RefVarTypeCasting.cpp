#include<iostream>
using namespace std;
int c = 45;
// "::" -> scope resolution operator
int main()
{
    /*
    int a, b, c;
    cout << "Enter the value of a: " << endl;
    cin>>a;
    cout << "Enter the value of b: " << endl;
    cin>>b;     
    c = a+b;
    cout << "The sum is " << c <<endl; 
    cout << "The global c is: " << ::c << endl;
    
    float d = 45.7f;
    long double e = 45.7l;
    // without any specific mention c++ compiler will take
    //decimal values as double
    cout << "The size of 34.4 is: " << sizeof(34.4) << endl; 
     cout << "The size of 34.4f is: " << sizeof(34.4f) << endl;
     cout << "The size of 34.4F is: " << sizeof(34.4F) << endl;
      cout << "The size of 34.4l is: " << sizeof(34.4l) << endl;
     cout << "The size of 34.4L is: " << sizeof(34.4L) << endl;
    cout << "The value of d is: " << d << endl; 
    cout << "The value of e is: " << e << endl;
    // This will not show any difference here but will show
    // in function overloading

    //Reference Variables
    float x = 5;
    float &y = x;
    cout << x << endl;
    cout << y << endl;*/



    //Type casting
    int a = 45;
    float c = 56.79, b = 43.25;
    cout <<"The value of a is: " << a <<endl;
    cout <<"The value of a is: " << (float)a <<endl;
    cout <<"The value of b is: " << b <<endl;
    cout <<"The value of b is: " << (int)b << endl;
    cout << "The value of b is: "<< int(b) << endl;

    int f = int(b);

    cout << "The expression a+b is : " << a+ b << endl;
    cout << "The expression a+int(b) is : " << a+int(b) << endl;
    cout << "The expression a+int(b) is : " << a+(int)b << endl;

    return 0;
}
