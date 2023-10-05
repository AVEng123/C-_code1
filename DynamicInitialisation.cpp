/*
Dynamic Initialization of Objects Using Constructors
Meaning after program runs
Then object is created and after that we know
which constructor is invoked

Compiler always needs a deafult constructor

*/

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float intRate;
    float amount;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r can be a value like 0.04
    BankDeposit(int p, int y, int r);
    void show(void);
};

BankDeposit ::BankDeposit(int p, int y, float r)
{   
    cout << "The float constructor is called" << endl;
    principal = p;
    years = y;
    intRate = r;
    amount = principal;

    for (int i = 0; i < y; i++)
    {
        amount = amount * (1 + intRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    cout << "The int constructor is called" << endl;
    principal = p;
    years = y;
    intRate = float(r) / 100;
    amount = principal;

    for (int i = 0; i < y; i++)
    {
        amount = amount * (1 + intRate);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return value after " << years << endl
         << "is " << amount << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p,y,r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p,y,R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    bd3.show();

    return 0;
}