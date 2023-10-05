/*
Inheritance --> re-usability --> saves time and money
We will be re-using already tested and debugged class
Existing class  --> Base class
New class --> Derived class
Types-->
1. Single Inheritance : Derived class from only one Base Class(A->B)
2. Multiple Inheritance: Derived class from more than one Base Class(A & C --> B)
3. Hierarchical Inheritance: Several derived classes from a single base class(A --> B & C)
4. Multilevel Inheritance: Deriving a class from already derviced class(A -> B -> C)
5. Hybrid Inheritance: Multiple + Multilevel (A --> B & C; B--> D & C --> D). Note: one of the parent classes is not a base class.

*/

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int id1)
    {
        id = id1;
        salary = 100;
    }
    Employee(){}
    /*
        Whenever the object of derived class is called, it will need a default constructor in base class to be present
        As when object oof child class is created it invokes the default constructor of base class
    */
};

// Derived class -> syntax: class derived-class-name : visibility-mode base-class-name
//default visibility mode is private
// Private visibility mode: public members of the base class becomes the private member of the dervied class
//Public visibility mode: public members of the base class becomes the public member of the dervied class
//private members of base class are never inherited in derived class

class Programmer : Employee
{

public:
    int langCode = 9;
    Programmer(int inpID)
    {
        id = inpID; //We will see error as ID is private hence needs to be public
        
    }
};

int main()
{

    Employee E1(1), E2(2);
    cout << E1.salary << endl;

    Programmer P1(1);
    /*
    Just creating this will give the following error:
                .\InheritanceBasics.cpp: In constructor 'Programmer::Programmer(int)':
            .\InheritanceBasics.cpp:44:5: error: no matching function for call to 'Employee::Employee()'
                {
                ^
            .\InheritanceBasics.cpp:24:5: note: candidate: Employee::Employee(int)
                Employee(int id1)
                ^~~~~~~~
            .\InheritanceBasics.cpp:24:5: note:   candidate expects 1 argument, 0 provided
            .\InheritanceBasics.cpp:19:7: note: candidate: constexpr Employee::Employee(const Employee&)
            class Employee
                ^~~~~~~~
            .\InheritanceBasics.cpp:19:7: note:   candidate expects 1 argument, 0 provided
            .\InheritanceBasics.cpp:19:7: note: candidate: constexpr Employee::Employee(Employee&&)
            .\InheritanceBasics.cpp:19:7: note:   candidate expects 1 argument, 0 provided
     To solve this error we need a default constructor in base class
    */

    //Programmer object will not be able to access id variable even if it is public
    //Coz the visibility by default is private.

    return 0;
}