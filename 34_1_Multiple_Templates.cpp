#include<iostream>
using namespace std;

template <class T1 , class T2>
class myClass{
    public:
    int data1;
    string data2;
    myClass(T1 a , T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};

int main(){
    myClass<int , string> obj(1,"Ansh");
    obj.display();
    return 0;
}