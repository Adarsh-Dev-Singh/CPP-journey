#include<iostream>
using namespace std;
int a = 50;
int main(){
    // **********Built in data types**********
    // int a=1, b=2,c=3;
    // cout<<"The sum of b+c is "<<b+c<<endl;
    // cout<<"The value of local a is "<<a<<endl;
    // cout<<"The value of global a is "<<::a<<endl;
    
    // ***********Integer , float and double liternal**********
    // float b = 21.213;
    // long double c = 32.32321;
    // cout<<"The value of float a is "<<(float)(a)<< " and  Size of float a is "<<sizeof(float (a))<<endl;
    // cout<<"The value of b is "<<b<< " and  Size of b is "<<sizeof(b)<<endl;
    // cout<<"The value of float c is "<<(float)(c)<< " and  Size of float c is "<<sizeof(float (c))<<endl;
    // cout<<"The value of  c is "<<c<< " and  Size of c is "<<sizeof(c)<<endl;
    // cout<<"The value of double c is "<<(double)c<< " and  Size of double  c is "<<sizeof((double)c)<<endl;
    
    // // **************Reference Variables*******************
    int  x = 100;
    int &y = x;
    int &z = y;
    cout<<x<<endl<<y<<endl<<z<<endl;
    return 0;
}