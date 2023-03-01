#include <iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        Complex(int ,int);//Constructor initialization
        //A constructor is used to initialize object of its class
        // We have used default constructor here
        // A constructor doesn't have return types 
        void Printdata(){
           cout<<"The required Complex number is "<< a << " + "<<b<<"i"<<endl;
        }

};
Complex :: Complex(int x , int y){
    a = x; 
    b = y;
}


int main(){
    Complex c(1,2);
    // Implicit Call
    c.Printdata();
    Complex d = Complex (4,5);
    //Explicit Call
    d.Printdata();
    return 0;
}