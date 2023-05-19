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
            cout<<"Antutu Score is given by : "<<AntutuScore<<endl;
            cout<<"Camera Resolution is given by : "<<CameraResolution<<endl;
        }
};
int main(){
    // Mobile Xiaomi11i;
    // Xiaomi11i.Setdata(490000,108);
    // Xiaomi11i.Getdata();


    Mobile *Xiaomi11icpu = new Mobile;
    Xiaomi11icpu->Setdata(490000,108); // or (*Xiaomi11iphonecover).Setdata(490000,108)
    Xiaomi11icpu->Getdata(); // or (*Xiaomi11iphonecover).Getdata();

    Mobile *Samsungcpu = new Mobile[2];
    Samsungcpu->Setdata(356737,48);
    Samsungcpu->Getdata();
    (Samsungcpu + 1)->Setdata(678793,64);
    (Samsungcpu + 1)->Getdata();
    return 0;
}