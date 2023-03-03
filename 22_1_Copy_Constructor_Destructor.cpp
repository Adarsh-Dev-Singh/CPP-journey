#include<iostream>

using namespace std;
class gclass{
    int a ;
    public:
    gclass(){
        a = 0;
    }
    gclass(int lassi){
        a = lassi;
    }
    gclass(gclass &bangdu){
        a = bangdu.a;
        cout<<"The copy constructor is called !!!"<<endl;
    }
    void printg(){
        cout<<"The value of gclass is "<<a<<endl;
    }
};

int main(){
    gclass x , y(10) , z;
    x.printg();
    y.printg();
    z.printg();
    gclass z1(z);
    z1.printg();


    return 0;
}