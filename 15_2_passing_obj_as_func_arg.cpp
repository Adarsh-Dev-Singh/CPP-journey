#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        void Setdata(int v1 , int v2){
            a = v1;
            b = v2;
        }
        void Set_data_by_sum(Complex o1 , Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void print_number(){
            cout<<"The required complex number is "<< a <<" + "<<b<<"i"<<endl;
        }

};

int main(){
    int q = 0;
    Complex number[10], cucumber[10];
    for (int i = 0; i < 5; i++)
    {   int x , y;
        cout<<"Enter the value of real part in complex number "<<endl;
        cin>>x;
        cout<<"Enter the value of imaginary part in complex number "<<endl;
        cin>>y;
        
        q++;
        
        number[i].Setdata(x , y);
        number[i].print_number();
        
        if (q>1){
        cucumber[q].Set_data_by_sum(number[i-1],number[(i)]);
        
        cucumber[q].print_number();}
    }
    // Complex c1 , c2 , c3;
    // c1.Setdata(1,2);
    // c2.Setdata(3,4);
    // c3.Set_data_by_sum(c1,c2);
    // c3.print_number();
     return 0;
}
/*This program throws garbage values when object is passed as class argument i.e set _data_by_sum isn't working properly 
Check it bro 
Tadaah Congratxxxxx/ (Its working properly now!!!)*/