#include<iostream>
// C++ sequence of bytes corresponding to input and output are commonly known as streams.
//Input stream - flow of bytes from input device(keyboard) to main memory
//Output stream - flow of bytes from main memory to output device(display)
using namespace std;
//<< is called insertion operator
//>> is called extraction operator
int main()
{
    int num1 , num2;
    cout << "Enter the value of num1: \n ";
    cin >>num1;

    cout << "Enter the value of num2: \n ";
    cin >>num2;

    cout << "The sum is " << num1 + num2;

    
    return 0;
}
