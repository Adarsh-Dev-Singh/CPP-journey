#include<iostream>

using namespace std;
// class gclass{
//     int a ;
//     public:
//     gclass(){
//         a = 0;
//     }
//     gclass(int lassi){
//         a = lassi;
//     }
//     gclass(gclass &bangdu){
//         a = bangdu.a;
//         cout<<"The copy constructor is called !!!"<<endl;
//     }
//     void printg(){
//         cout<<"The value of gclass is "<<a<<endl;
//     }
// };

// int main(){
//     gclass x , y(10) , z;
//     x.printg();
//     y.printg();
//     z.printg();
//     gclass z1(z);
//     z1.printg();


//     return 0;
// }


int count = 0;
class gclass{
    int a ;
    public:
    gclass(){
        a = 0;
        count++;
        cout<<"Now the count is "<<count<<endl;
    }
    gclass(int lassi){
        a = lassi;
        count++;
        cout<<"Now the count is "<<count<<endl;
        
    }
    gclass(gclass &bangdu){
        a = bangdu.a;
        cout<<"The copy constructor is called !!!"<<endl;
        count++;
        cout<<"Now the count is "<<count<<endl;
    }
    void printg(){
        cout<<"The value of gclass is "<<a<<endl;
    }
    ~gclass(){
        cout<<"The destructor is called "<<endl;
        count--;
        cout<<"Now the count is "<<count<<endl;
    }

};

int main(){

        
    
    
    gclass x , y(10) , z(100);
    x.printg();
    y.printg();
    z.printg();
    {
    gclass z1(z);
    z1.printg();
    }
    return 0;
}
