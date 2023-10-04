//Static Data Members and Methods in C++ OOPs

/*
Static variables -->
1. Variable associated with class --> also called class variables
2. All objects will share same static variable. And can modify it.
3. The initial value can be set to non-zero when it is associated with class e.x.:
int Employee::count =1000;
*/

/*
Static functions -->
1. The function which can only access static members whether fun or variable
2. Something which has to be run with just class name + scope resolution operator
3. Used for making utility functions
*/

#include<iostream>
using namespace std;

class Employee{

    private:
    static int count; //static variable is by default initialised by 0
    int id;

    public:
        void setData(void){
            cout<<"Enter the id" << endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The employee id is: "<<id<< " and this is employee number " << count<<endl;;
        }

    static void getCount(void){
        //cout << id; --> throws an error
        cout << "The final value of count is: " << count << endl;
    }
};

int Employee::count; //we are making sure that count is associated with employee


int main(){
    
    Employee Shubham, Aman, Ram;
    //Shubham.id =1;
    //Shubham.count =1; will give error as both are private

    Shubham.setData();
    Shubham.getData();

    Employee::getCount();

    Aman.setData();
    Aman.getData();
     Employee::getCount();

    Ram.setData();
    Ram.getData();
     Employee::getCount();

    return 0;
}