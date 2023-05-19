#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int (*c) = &a;
    cout<<"The value of  a is :"<<a<<endl;
    cout<<"The value of  &a is :"<<&a<<endl;
    cout<<"The value of  *&a is :"<<*&a<<endl;
    cout<<"The value of  c is :"<<c<<endl;
    // cout<<"The value of  b is :"<<b<<endl;
    cout<<"The value of  &c is :"<<&c<<endl;
    cout<<"The value of  *c is :"<<*c<<endl;
    return 0;
}