#include<iostream>
using namespace std;
int count =0;
class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 constructor is called "<<endl;
            count++;
            cout<<"Now the count is "<<count<<endl;
        }
        void printbase1(void){
            cout<<"The value of data1 is "<< data1<<endl;            
        }
        ~Base1(){
            cout<<"The destructor is called for base1 class"<<endl;
            count--;
            cout<<"Now the count is "<<count<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 constructor is called "<<endl;
            count++;
            cout<<"Now the count is "<<count<<endl;
        }
        void printbase2(void){
            cout<<"The value of data2 is "<< data2<<endl;            
        }
         ~Base2(){
            cout<<"The destructor is called for base2 class"<<endl;
            count--;
            cout<<"Now the count is "<<count<<endl;
        }
};
class Derived :  public Base2,virtual public Base1 {
    int derivedata1;
    int derivedata2;
    public:
        Derived(int a , int b , int c , int d ) : Base2(b),Base1(a){
        derivedata1 = c ;
        derivedata2 = d ;
        cout<<"Derived Class constructor is called"<<endl;
        count++;
        cout<<"Now the count is "<<count<<endl;                
        }
        void Printderived(void){
            cout<<"The value of derivedata1 is "<< derivedata1 <<endl;
            cout<<"The value of derivedata2 is "<< derivedata2 <<endl;
        }
        ~Derived(){
            cout<<"The destructor is called for Derived class"<<endl;
            count --;
            cout<<"Now the count is "<<count<<endl;
        }

};
int main(){
    Derived Ansh(1,2,3,4);
    Ansh.Printderived();
    Ansh.printbase1();
    Ansh.printbase2();   
    return 0;
}