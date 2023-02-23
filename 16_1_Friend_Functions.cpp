#include<iostream>

using namespace std;
class Complex{

    int a ;
    int b ;
    friend Complex Sumcomplex(Complex o1 , Complex o2);
    public:
        void Setdata(int v1 , int v2 ){
          a = v1;
          b = v2;  
        }
        void Printdata(){
           cout<<"The required Complex number is "<< a << " + "<<b<<"i"<<endl;
        }
};

Complex Sumcomplex(Complex o1, Complex o2){
    Complex o3;
    o3.Setdata((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1 , c2 , c3;
    c1.Setdata(1,2);
    c1.Printdata();
    c2.Setdata(3,4);
    c2.Printdata();
    c3 = Sumcomplex(c1,c2);
    c3.Printdata();

    return 0;
}