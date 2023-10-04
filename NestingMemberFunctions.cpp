// OOPs Recap & Nesting of Member Functions
// C++ --> initially called C with classes
//  class --> extension of structures (in C)
/*
Limitation of structures
    --> members are public
    --> No methods
Classes --> can have members and properties
classes --> can make few members as private and some as public
structures in C++ are typedef
objects can be declared along with class declaration[but not recommended]
class Person{
    //...
} Aman, Shubham, Rishabh;

Aman.salary = 8 makes no sense if salary is private
*/

/*
Nesting of Member Functions
--> calling one function from inside of another function without . dot operator
*/

#include <string>
#include <iostream>
using namespace std;

class Binary
{

    string s;
// private:
//     void chk_bin(void);
//Here if it is private then we can't call it in main but call it inside method

public:
    void read(void);
    //void chk_bin(void);
    void ones(void);
    void display(void);
};

void Binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary::ones(void)
{
    chk_bin(); // We are nesting it here 
    // user can read do ones compliment but we will internally check binary is correct or not
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void Binary::display(void)
{

    cout << "Binary number is: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    Binary b;
    b.read();
    //b.chk_bin();
    b.display();
    b.ones();
    b.display();

    return 0;
}