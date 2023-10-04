#include<iostream>
using namespace std;
int main(){
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i << endl;
    //     if (i==2)
    //     {
    //         break;
    //     }
        
    // }

    for (int i = 0; i < 5; i++)
    {
        if (i==3){
            continue;
        }
        // it means that when condition is true the control
        //will go back to loop condition it will skip 3.
        cout << i << endl;
        
    }
    
    
    return 0;
}