// An array is a collection of items of similar type stored in contiguous memory locations
#include<iostream>
using namespace std;
int main(){
    
    // int marks[] = {4,5,6,7};
    // for (int i = 0; i <=4; i++)
    // {
    //     // Values of the array can be changed.
    //     // marks[3] = 45;
    //     cout<< marks[i] << endl;
    // }
    
    // arrays work with pointers
    //in case of normal variables we need & to get the address
    // in case of arrays normal name gives the address of first element of array into the pointer variable

//pointer arithmetic
// addressNew = addressCurrent + i * size_of(data_type)
// p+i = p + i*size_of(int) = 32 + 1 *4 = 36

    int marks[] = {78, 45, 32,56};
    int* p = marks;
    cout << p << endl;
    // cout <<"The value of marks[0] is: "<< *p << endl;
    // cout <<"The value of marks[1] is: "<< *(p+1) << endl;
    // cout <<"The value of marks[2] is: "<< *(p+2) << endl;
    // cout <<"The value of marks[3] is: "<< *(p+3) << endl;
    cout << *(p++) << endl;
    cout << p << endl;
    cout << *(++p) << endl;
    cout << p << endl;


    return 0;
}