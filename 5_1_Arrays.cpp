#include<iostream>
using namespace std;

int main(){
    int kudi[10]  = {21,32,3,21,32,31,32,32,43143,4314};
    // for(int a = 0; a <10;a++){
    //     cout<<kudi[a]<<endl;
    // }
    // int a = 0;
    // while(a<10){
    //     cout<<kudi[a]<<endl;
    //     a++;
    // }
    int a = 0;
    // do{
    //      cout<<kudi[a]<<endl;
    //     a++;
    // }while(a<10);
    // return 0;
    int *pikasa = kudi;
    while(a<10){
        cout<<"Value of kudi at address pikasa is "<<*(pikasa + a)<<endl;
        cout<<" address pikasa is "<<(pikasa + a)<<" at kudi"<<endl;
        a++;
    }
}