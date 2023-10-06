// A --> B --> C
//Granfather --> Father --> Child

/*
1. A is base class for B and B is the base class for C
2. A --> B --> C is called Inheritance Path

*/
#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNum;
    public:
    void set_rollNum(int);
    void get_rollNum(void);

};

void Student :: set_rollNum(int r){
    rollNum = r;
}

void Student :: get_rollNum(){
    cout << "The roll number is: "<< rollNum << endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;

}

void Exam :: get_marks(){
    cout << "The marks of maths are: "<< maths << endl;
    cout << "The marks of physics are: "<< physics << endl;
}

class Result : public Exam{
    float percentage;
    public:
    void display(){
        get_rollNum();
        get_marks();
        cout << "Your percentage is: " << (maths + physics)/2 << endl;
    }

};

int main(){  
    Result Shubham;
    Shubham.set_rollNum(12);
    Shubham.set_marks(99.5, 95.5);
    Shubham.display();

    return 0;
}