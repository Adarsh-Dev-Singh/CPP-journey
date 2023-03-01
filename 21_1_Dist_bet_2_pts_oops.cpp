#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int a;
    int b;
    friend void Distb(Point , Point);
    public:
        Point(int x = 0  , int y = 0){/*Default     Constructor*/
            a = x;
            b = y;
        }
        void printpt(void){
        cout<<"The cartesian point :  ("<<a<<" , "<<b<<")"<<endl;
        }
};
void Distb(Point e , Point f){
    double g , h , i ,j , k;
    i = f.a - e.a;
    j = f.b - e.b;
    g = sqrt(pow(i , 2) + pow(j , 2));

    cout<<"The distance between the points : "<< g <<endl;
}


int main(){
    Point m = Point(1,1);
    Point n = Point(5,4);
    Distb(m,n);
    return 0;
}
// Some problem is there with sqrt and pow
// Problem Solved hurray