/*
Array of Objects and Passing Objects as Function Arguments 
*/


#include<iostream>
using namespace std;

class Employee{ 
    private:
        int id;
        int salary;
    
    public:
        void setId(void){
            cout<< "Enter the id of the employee" <<endl;
            cin >>id;
        }

        void getId(void){
            cout<< "The id of this employee is: " << id <<endl;
        }

};


int main(){
    
    // Employee Shubham, Aman, Sanjeev, Ram, Shyam;

    // Shubham.setId();
    // Shubham.getId();

    Employee fb[4]; //this class is like a data type

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}