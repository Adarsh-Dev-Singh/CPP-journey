#include<iostream>
using namespace std;
class Interest{
    int Principle;
    int Years;
    float Interestrate;
    float Returnvalue;
    public:
        Interest(){}
        Interest(int x , int y , int g);
        Interest(int x , int y , float z);
        void show();

};
Interest :: Interest(int x , int y, int g){
    Principle = x;
    Years = y;
    Interestrate = float(g)/100;
    Returnvalue =   Principle ;
     for (int i = 0; i < Years; i++)
    {
        Returnvalue = Returnvalue * (1+Interestrate);
    }
}
Interest ::Interest(int x , int y , float z){
    Principle = x;
    Years = y;
    Interestrate = z;
    Returnvalue = Principle;
    for (int i = 0; i < Years; i++)
    {
        Returnvalue = Returnvalue * (1+Interestrate);
    }
    
}
void Interest :: show(){
    cout<<"The Principle amount of "<<Principle
        <<" will become "<<Returnvalue
        <<" after a period of "<<Years
        <<" Years "<<endl;
}
int main(){
    Interest a1 ,b1 ,c1;
    int a , b , c ;
    float  d;
    cout<<endl<<"Enter the amount , Years and Interestrate "<<endl;
    cin>>a>>b>>c;
    a1 = Interest(a , b , c);
    a1.show();
    /*cout<<endl<<"Enter the amount , Years and Interestrate "<<endl;
    cin>>a>>b>>d;
    b1 = Interest(a , b , d);
    b1.show();*/



    return 0;
}