
#include <iostream>
using namespace std;

// class Base{

//     int data1; // private by default and can't be inherited

//     public:
//         int data2;
//         void setData();
//         void setData(int,int);
//         int getData1();
//         int getData2();
// };


// class Derived : public Base{

//         int data3; 
//         public:
//             void process();
//             void display();

// };

// void Base::setData(int a, int b){
//     data1 = a;
//     data2 = b;
// }

// void Base::setData(void){
//     data1 = 4;
//     data2 =7;
// }

// int Base :: getData1(){
//     return data1;
// }

// int Base :: getData2(){
//     return data2;
// }

// void Derived :: process(){
//     data3 = data2 * getData1();
// }

// void Derived :: display(){
//     cout << "Value of data 1:  " << getData1() << endl;
//     cout << "Value of data 2:  " << data2 << endl;
//     cout << "Value of data 3:  " << data3 << endl;
// }

// int main()
// {
//     Derived D1;
//     D1.setData();
//     D1.process();
//     D1.display();

//     Derived D2;
//     D2.setData(12,15);
//     D2.process();
//     D2.display();
//     //All this works because we inherited it via public now we will see what happens when it is private
    
//     return 0;
// }




class Base{

    int data1; // private by default and can't be inherited

    public:
        int data2;
        void setData();
        void setData(int,int);
        int getData1();
        int getData2();
        // Now with private access modifiers these three methods will become
        //private in Derived class
        //which can be called only from inside of derived class not with any function members
};


class Derived : private Base{

        int data3; 
        public:
            void process();
            void display();

};

void Base::setData(int a, int b){
    data1 = a;
    data2 = b;
}

void Base::setData(void){
    data1 = 4;
    data2 =7;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

void Derived :: process(){
    setData(); // This works
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout << "Value of data 1:  " << getData1() << endl;
    cout << "Value of data 2:  " << data2 << endl;
    cout << "Value of data 3:  " << data3 << endl;
}

int main()
{
    Derived D1;
   // D1.setData();
    D1.process();
    D1.display();

    Derived D2;
    //D2.setData(12,15); 
    D2.process();
    D2.display();

        /*
                    .\SingleInheritance.cpp: In function 'int main()':
                .\SingleInheritance.cpp:127:16: error: 'void Base::setData()' is inaccessible within this context
                    D1.setData();
                                ^
                .\SingleInheritance.cpp:101:6: note: declared here
                void Base::setData(void){
                    ^~~~
                .\SingleInheritance.cpp:127:16: error: 'Base' is not an accessible base of 'Derived'       
                    D1.setData();
                                ^
                .\SingleInheritance.cpp:132:21: error: 'void Base::setData(int, int)' is inaccessible within this context
                    D2.setData(12,15);
                                    ^
                .\SingleInheritance.cpp:96:6: note: declared here
                void Base::setData(int a, int b){
                    ^~~~
                .\SingleInheritance.cpp:132:21: error: 'Base' is not an accessible base of 'Derived'       
                    D2.setData(12,15);
        
        */
    
    
    return 0;
}