#include<iostream>

using namespace std;
class Complex;
class Calculator{
    public:
        int sumrealcomplex(Complex , Complex);

};
class Complex{
    int a , b;
    friend class Calculator;
    public:
        void setdata(int v1 , int v2){
            a = v1 ;
            b = v2 ; 
        }
        void Printdata(){
           cout<<"The required Complex number is "<< a << " + "<<b<<"i"<<endl;
        }
};
int Calculator :: sumrealcomplex(Complex o1 , Complex o2){
     return o1.a + o2.a;
}
int main(){
    Complex c1 , c2 , c3 ;
    c1.setdata(1,2);
    c1.Printdata();
    c2.setdata(5,7);
    c2.Printdata();
    Calculator calc;
    int res = calc.sumrealcomplex(c1,c2);
    cout<<"The sum of real part of the two complex number is given by "<<res<<endl;
    return 0;
}