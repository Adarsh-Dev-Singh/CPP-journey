#include<iostream>
using namespace std;

class Base1{
    protected:
    int a;
    public:
        void var1(int x){
            a = x;
        }
};
class Base2{
    protected:
    int b;
    public:
        void var2(int x){
            b = x;
        }
};

class Derived : public Base1 , public Base2 {
    public:
        void add(void){
            cout<<"The value of int 1 is "<<a<<endl;
            cout<<"The value of int 2 is "<<b<<endl;
            cout<<"The value of sum of int 1 and int 2 is "<<a+b<<endl;
        }

};
int main(){
    Derived a;
    a.var1(5);
    a.var2(10);
    a.add();
}