#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        Complex(void);//Constructor initialization
        //A constructor is used to initialize object of its class
        // We have used default constructor here
        // A constructor doesn't have return types 
        void Printdata(){
           cout<<"The required Complex number is "<< a << " + "<<b<<"i"<<endl;
        }

};
Complex ::Complex(void){
    a = 10; 
    b = 4;
}


int main(){
    Complex a;
    a.Printdata();
    return 0;
}