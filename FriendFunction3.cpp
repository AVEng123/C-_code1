/*


*/
#include <iostream>
using namespace std;

// class Y;
// /*
// .\FriendFunction3.cpp:14:23: error: 'Y' has not been declared
//      friend void add(X,Y);
//                        ^
// .\FriendFunction3.cpp: In function 'void add(X, Y)':
// .\FriendFunction3.cpp:27:59: error: 'int X::data' is private within this context
//      cout << "Summing data of X and Y objects is: " << (o1.data + o2.data) << endl;
//                                                            ^~~~
// .\FriendFunction3.cpp:9:9: note: declared private here
//      int data;

//      To solve this error we need to declare a class Y
// */

// class X{
//     int data;
//     public:
//         void setValue(int value){
//             data = value;
//         }
//     friend void add(X,Y);
// };

// class Y{
//     int data;
//     public:
//         void setValue(int value){
//             data = value;
//         }
//     friend void add(X,Y);
// };

// void add(X o1, Y o2){
//     cout << "Summing data of X and Y objects is: " << (o1.data + o2.data) << endl;
// }
class C2;

class C1
{
private:
    int val;
    friend void swap(C1 &, C2 &);

public:
    void indata(int a)
    {
        val = a;
    }

    void display(void)
    {
        cout << val << endl;
    }
};

class C2
{
private:
    int val;
    friend void swap(C1 &, C2 &);

public:
    void indata(int a)
    {
        val = a;
    }

    void display(void)
    {
        cout << val << endl;
    }
};

void swap(C1 &x, C2 &y)
{
    int tmp = x.val;
    x.val = y.val;
    y.val = tmp;
}

int main()
{
    // X a;
    // a.setValue(3);

    // Y b;
    // b.setValue(5);

    // add(a,b);

    C1 o1;
    C2 o2;

    o1.indata(45);

    o2.indata(62);

    cout << "The value of c1 befor swap is: ";  o1.display(); 
    cout << "The value of c2 before swap is: "; o2.display();
    swap(o1, o2);
    cout << "The value of c1 after swap is: ";  o1.display(); 
    cout << "The value of c2 after swap is: "; o2.display();

    return 0;
}
