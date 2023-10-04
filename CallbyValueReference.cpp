//

#include<iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return  c;
// }

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
// call by reference using pointers
void swapReference(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

//return by reference
int & swapReferenceVar1(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    // Call by Value
    int x =10, y=15;
    cout << "The value of x is: "<< x << " and the value of y is: "<< y << endl;
    swap(x,y); // formal arguments will go to actual arguments
    cout << "The value of x is: "<< x << " and the value of y is: "<< y << endl;
    //hence this will not do any swap 

    //Call by Reference
     x =23, y=45;
    cout << "The value of x is: "<< x << " and the value of y is: "<< y << endl;
    swapReferenceVar(x,y); // the address of formal arguments will go to actual arguments
   //swapReference(&x,&y);
    cout << "The value of x is: "<< x << " and the value of y is: "<< y << endl;
    swapReferenceVar1(x,y) = 456;
    cout << "The value of x is: "<< x << " and the value of y is: "<< y << endl;
    // function returns a reference to x and hence value of x will be changed.
    return 0;
}