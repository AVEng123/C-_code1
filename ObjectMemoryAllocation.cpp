// Memory Allocation of Objects and Arrays in Classes
// by default everything is private

#include <iostream>
using namespace std;

class Shop
{

private:
    int itemID[10];
    int itemPrice[10];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of your item no. "<< counter+1 << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID: " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{   
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}