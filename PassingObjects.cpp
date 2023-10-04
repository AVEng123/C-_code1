// Passing Objects as Function Arguments
#include<iostream>
using namespace std;

class complex{
    
    int a,b;

    public:

        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(void){
            cout << "The complex number is: " << a << " + i" << b << endl;
        }

};

int main(){

    complex C1, C2, C3;
    C1.setData(1,2);
    C1.printNumber();

    C2.setData(3,4);
    C2.printNumber();

    C3.setDataBySum(C1,C2);
    C3.printNumber();

    return 0;
}