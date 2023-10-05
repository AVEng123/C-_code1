/*
Destructors  --> removes all the memory which was occupied bvy constructor
Never takes an argument nor does it return any value
Can be used to de-allocate memory
*/

#include <iostream>
using namespace std;

int count =0;
class Number{
        
    public:
        Number(){
            count++;
            cout << "This is the time when constructor is called for object "<< count << endl;
        }

        ~Number(){
            cout << "This is the time when my destructor is called for object " << count<< endl;
        }
       
        void display(){
            cout << "The number is: " << count << endl;
        }
};

int main()
{
    cout << "We are in main function" << endl;
    cout << "Creating our first object n1" << endl;
    Number n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Number n2, n3;
        cout << "Exiting this block" << endl;
    }// As we are going out of the scope for n2 and n3, the memory needs to be free
   cout << "We are back in main function" << endl;

    return 0;
}