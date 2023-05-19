#include<iostream>

using namespace std;

class NovelsRead{
    int a ;
    int b ;
    public:
        NovelsRead(int Read , int StillReading ) : a(Read) , b (StillReading){
            cout<<"Constructor called"<<endl;

        }
        void printSauda(void){
            cout<<"The novels read :"<<a<<endl;
            cout<<"The novels still reading :"<<b<<endl;
        }
        ~NovelsRead(){
            cout<<"Destructor called bye bye !!!"<<endl;
        }
};
int main(){
    NovelsRead Thisyear(5,2);
    Thisyear.printSauda();

    return 0;
}
