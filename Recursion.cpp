// Recursion --> a function calling itself till it meets the condition
// Not useful everywhere but helps in some problems 
// Factorial its very intutive
// 0! = 1 and 1! =1 and 2! = 2*1 =2 ...
// n! = n * (n-1)

#include<iostream>
using namespace std;

double factorial(int n){
    if(n<=1){
        return 1;
    }
    return n* factorial(n-1);
}

//Fibonacci Series is another one example
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout <<"Enter a number" << endl;
    cin>>a;
    //cout << "The factorial of "<< a << " is: " << factorial(a)<< endl;

    cout << "The term in fibonacci sequence at position "<< a << " is " << fib(a)<<endl;
    return 0;
// Sometimes recursion gives a big over head.


}