#include<iostream>
// Rules of variable declaration
//1. Name can range from 1 to 255 characters
// 2. Name must begin with a letter or underscore 
//3. After the first initial letter, it can have numbers
//4. It is case sensitive
//5. No space or special characters like $£&*
//6. No C++ keyword


using namespace std ;
int val  =6;
void sum()
{
    int a = 1;
    cout << "The value from function sum is\n " << a ;
    cout << "The value of val from function sum is \n" << val ;

}

int main(){
    int a =4, b=5;
    float pi = 3.14;
    char c = 'a';
   int val = 45;
   // cout << "The value of a is " << a << ".\n The value of b is " << b << ".\n" ;
    //cout << "The value of pi is " << pi << ".";
   // cout << "\nThe value of c is " << c << ".";
   sum();
   //Even if the execution starts in main function but when the compiler enters the sum function it will find the val variable from global scope 
   // as the local variable is in main which it will not know
   val =78;
   cout <<"The value of variable val from main is " << val;
   //Here in this case when val is printed the variable will be searched in local scope.
    return 0;
}

//when compiler finds a variable in a method then it will first try to find the variable in local scope if not found then it will look in global scope not in main

