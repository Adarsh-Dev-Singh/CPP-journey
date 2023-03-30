#include<iostream>
#include<cmath>
using namespace std;

class Simplecalculator{
    protected :
    float sum;
    float substract;
    float divide;
    float multiply;

    public:
    void performsop(float x , float y){
        sum = x + y ;
        substract = x - y; 
        divide = x/y;
        multiply = x*y;
        cout<<"The numbers are a :"<< x << " and y :"<< y <<endl;
    }
    void show(void){
        cout<<"The sum of number a and b is "<< sum<<endl;
        cout<<"The substraction of number a and b is "<< substract <<endl;
        cout<<"The result after dividing  number a and b is "<<divide<<endl;
        cout<<"The multiplication of number a and b is "<<multiply<<endl;
    }
};

class Scientificcalculator{
    protected:
    float sint;
    float cost;
    float tant;
    float powt;
    public:
        void performsfop(float a , float b){
            sint = sin(a);
            cost = cos(a);
            tant = tan(a);
            powt = pow(a , b);
        }
        void display(void){
        cout<<"The sin of number a is "<<sint<<endl; 
        cout<<"The cos of number a is "<<cost<<endl; 
        cout<<"The tan of number a is "<<tant<<endl; 
        cout<<"The power of number a to b is "<<powt<<endl; 
        }
    
};
class hybridcalculator : public Simplecalculator , public Scientificcalculator {
    public:
        void showh(void){
        cout<<"The hybrid output is given by:"<<endl;
        Simplecalculator :: show();
        Scientificcalculator :: display();
        }

};

int main(){
    Simplecalculator a;
    a.performsop(3,4);
    a.show();
    Scientificcalculator b;
    b.performsfop(3.14,4);
    b.display();
    hybridcalculator c;
    c.performsfop(3,4);
    c.performsop(3,4);
    c.showh();
}
