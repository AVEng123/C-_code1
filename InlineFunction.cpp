//Inline functions, Default Arguments, Constant Arguments

#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}


// int product(int a, int b){
//     static int c =0; // this executes only once
//     c = c+1; // next time this function is run, the value of c will be retained
//     return a*b+c;
// }


float amount(int principal, float interest=1.04){ //Default Arguments --> interest--> they have to be always in the extreme end
    return (principal*interest); // principal is called principal arguments
}

//constant arguments --> accidently functions shouldn't change so we put a qualifier called const

// int strlen(const char *p){
// }

int main(){
    int a , b;
    // cout << "Enter the value of a and b" << endl;
    // cin>>a>>b;

    // cout<< "The product of a and b is: "<< product(a,b) << endl;
    // cout<< "The product of a and b is: "<< product(a,b) << endl;
    // cout<< "The product of a and b is: "<< product(a,b) << endl;
    // cout<< "The product of a and b is: "<< product(a,b) << endl;
    // cout<< "The product of a and b is: "<< product(a,b) << endl;
    // Now here the same function is called multiple times 
    //This will take a lot of time and space
    //This time can be saved by adding inline but it can't be done for all
    //Bigger functions if made inline will make it cache run out
    //Never use inline for recursion and static variables 
    
    int principal = 100;
    cout <<"The total amount with principal as: " << principal << " is and after interest amount will be: "<<amount(principal) << endl;
    cout <<"The total amount with principal as: " << principal << " is and after interest of 10% amount will be: "<<amount(principal, 1.10) << endl;
    
    


    
    
    return 0;
}