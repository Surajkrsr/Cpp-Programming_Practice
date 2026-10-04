// create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those points

#include <iostream>
#include <cmath>
using namespace std;

class Point{
    int x,y;

    public:
    Point(int a, int b){
        x = a;
        y = b;
    }
    friend double  distance(Point p1, Point p2);
};

double distance(Point p1, Point p2){
double d = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
return d;
}

int main(){
    Point p1(2,3);
    Point p2(5,7);

    cout << "Distance = " << distance(p1,p2);
    return 0;
}