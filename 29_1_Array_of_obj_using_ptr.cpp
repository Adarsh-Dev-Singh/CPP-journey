#include<iostream>
using namespace std;
class  Mobile{
    int AntutuScore , CameraResolution;
    public:
        void Setdata(int a , int b ){
        AntutuScore = a ;
        CameraResolution = b;
    }
        void Getdata(){
            cout<<"Antutu Score is given by : "<<AntutuScore<<" points "<<endl;
            cout<<"Camera Resolution is given by : "<<CameraResolution<<" MP "<<endl;
        }
};
int main(){
    int size = 3;
    int i, p , q;
    Mobile *ptr = new Mobile [size];
    Mobile *copyptr = ptr;
    for(i = 0 ; i < size ; i++){
        cout<<"Enter the Antutu Score & Camera Resolution of the Mobile(Smartphone) number : "<<i+1<<endl;
        cin>>p>>q;
        ptr->Setdata(p,q);
        ptr++;
        cout<<ptr<<endl;
        cout<<copyptr<<endl;
    }
    for(i = 0 ; i < size ; i++){
        cout<<"The mobile number  "<<i+1<<" has following specs :"<<endl;
        copyptr->Getdata();
        copyptr++;
        cout<<ptr<<endl;
        cout<<copyptr<<endl;
    }


   return 0;
}