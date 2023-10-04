/*
Loops in C++ -> for, while, do-while
block of statements for repeated work
*/
#include<iostream>
using namespace std;

int main()
{
   /*for (int i = 0; i <=40; i++)
    {
        cout << i << endl;
    }

    int i =1;
    while(i<=40){
        cout << i << endl;
        i++;
    }*/ 

    //infinite loops
    // for(int i=0; true condition; i++){}
    // while(true){}
    
    int i =1;
   // do{
   //     cout << i << endl;
   //     i++;
   // }while(i<=4);

    // do{--} while(false); ---> even this executes one.

    //print out 6 table using do-while loop
   
    do{
        cout << (6*i) << endl;
        i++;
    }while(i<=10);



    return 0;
}
