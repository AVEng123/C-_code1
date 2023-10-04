//Structure --> user defined data type to combine different kind of data types
// Union --> similar to struct but they provide better memory management
//Enum --> 


// struct employee
// {
//     int eID;
//     char favChar;
//     float salary;
// };

// Another way is via typedef
typedef struct employee
{
    int eID; //4
    char favChar; //1
    float salary; //4
}ep;

union currency // generally used when we want to use only one from 3 and not all
{
    int INR; //4
    char Note; //1
    float USD; //4 
};


#include<iostream>
using namespace std;
int main(){

    ep Harry;
    ep shubham;
    // Harry.eID = 1;
    // Harry.favChar = 'c';
    // Harry.salary = 1200000000;

    // cout << "The value is: "<< Harry.eID << endl;
    // cout << "The value is: "<< Harry.favChar << endl;
    // cout << "The value is: "<< Harry.salary << endl;


    // union currency m1;
    // m1.INR = 50;
    // m1.Note = 'm';
    // cout << m1.INR << endl;
    // cout << m1.Note << endl;

    enum Meal{breakfast, lunch, dinner};
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    Meal m5 = breakfast;
    cout << m5 << endl; ;

    Meal m6 = lunch;
    cout << (m6==1) << endl;


    return 0;
}