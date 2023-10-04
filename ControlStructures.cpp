/*
Basic control structures -> 3 types
1. Sequence structure --> normal code
2. Selection structure --> if else, switch-case
3. Loop structure --> for, while, do-while
*/

#include<iostream>
using namespace std;
int main()
{   
    /* int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    if(age<18){
        cout << "You can't come to my party" << endl;
    }
    else if(age==18){
        cout << "Take a kid pass" << endl;
    }
    else{
        cout << "Come and enjoy my party" << endl;
    }
    //Switch case
    */
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
   switch (age)
   {
   case 18:
     cout << "You are 18";
    break;

    case 22:
     cout << "You are 22";
    break;

   default:
   cout <<"Nothing special";
    break;
   }


    return 0;
}
