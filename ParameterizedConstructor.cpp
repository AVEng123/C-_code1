

/*
*/

#include<cmath>
#include<iostream>
using namespace std;

class Point{
    private: 
        int x,y;
    public:
        friend double distance(Point, Point);
        Point(int a, int b){
            x=a;
            y=b;
        }

    void display(){
        cout << "The co-ordinate is: "<< x << " & "<< y << endl;
    }

};

double distance(Point p1, Point p2){
    return sqrt((p2.x-p1.x)^2 + (p2.y-p1.y)^2);
}


int main(){

    Point p(1,0);
    p.display();

    Point q(70,0);
    q.display();

    cout << "The distance between these two points are: " << distance(p,q) << endl;

    return 0;
}