#include <iostream>
using namespace std;

class Eatables{
    protected:
    int a ;
    int b ;
    string c;
    public:

    //  Eatables(int  Aalu, int Gobhi): a(Aalu) , b(Gobhi){
    //     cout<<"Constructor called"<<endl;
    //  }
    void setName(string a){
        c = a;
    }
    void getName(void){

        cout<<"The name of the Eatable is "<<c<<endl;
        // cout<<"The Number of the Aalu is "<<a<<endl;
        // cout<<"The Number of the Gobhi is "<<b<<endl;

    }
    // ~Eatables(){
    //     cout<<"Destructor Called"<<endl;
    // }
};
class PriceOfEatable:  public Eatables{
    int d;
    public:
        // PriceOfEatable(int d , int g  , int h ) : Eatables(g ,h){
        //     this->d = d;
        //     cout<<"Second Constructor called"<<endl;
        // }
        void Setdata(int fuck){
            d = fuck;
        }
        void getdata(void){
            getName();
            cout<<"And , The price of the Eatable is : "<< d<<endl;
        }
        // ~PriceOfEatable(){
        //     cout<<"Second Destructor Called"<<endl;
        // }
};
int main(){
    int size = 3;
    int a , i;
    string b ;
    PriceOfEatable *ptr = new PriceOfEatable [size];
    PriceOfEatable *copyptr = ptr;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter the name and price of the Eatable of the Eatable no. : "<<i+1<<endl;
        cin>>b>>a;  
        ptr->setName(b);
        ptr->Setdata(a);
        ptr++;  
          
    }
    for (i = 0; i < size; i++)
    {
        cout<<"The Details of the Eatable number "<<i+1<<" is : "<<endl;
        // copyptr->getName();
        copyptr->getdata();
        copyptr++;  
          
    }
    
    
    return 0;
}