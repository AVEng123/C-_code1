//Top down structured programming 
// do once use forever
// function prototypye --> basically we can keep the functions below

#include<iostream>
using namespace std;

//type function_name(arguments);

int sum(int a, int b); // gives assurity to compiler that sum is present in the code
 // int sum(int a,b) --> not accetable
 // int sum(int,int); --> Acceptable
void greet(void);

int main(){
    int num1, num2; // actual parameters
    greet();

    cout << "Enter first number" << endl;
    cin >> num1;

    cout << "Enter first number" << endl;
    cin >> num2;

    cout << "The sum is: " << sum(num1, num2) << endl;
    return 0;
}

int sum(int a, int b){ 
    // a, b are called arguments --> formal parameters
    // defined within function and will be used here
    int c = a+b;
    return c;
}

void greet(){
    cout << "Hello! Good Morning" << endl;
}
