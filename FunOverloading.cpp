//Function Overloading --> using same name function to do various tasks 
//Feature of polymorphism
// how does it work --> compiler matches the function prototype
// matches the number of arguments
//it works even if the data types change.

#include<iostream>
using namespace std;

int add(float a, int b){ // even if the data type is different but even that works
    cout << "Function with two arguments" <<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout << "Function with three arguments" <<endl;
    return a+b+c;
}

double volume(double r, int h){
    return (3.14*r*r*h);
}

double volume(int a){
    return (a*a*a);
}

double volume(int l, int b, int h){
    return (l*b*h);
}

int main(){
    
    cout<< "The sum of 3 and 6 is: " << add(3,6) << endl;
    cout << "The sum of 3,7 and 6 is: " << add(3,6,7) << endl;

    cout<< "The volume of cuboid of 1,2,3 is: " <<volume(1,2,3) << endl;
    cout<< "The volume of cylinder of 2,3 is: " <<volume(2,3) << endl;
    cout<< "The volume of cube of side 4 is: " <<volume(4) << endl;
    return 0;
}