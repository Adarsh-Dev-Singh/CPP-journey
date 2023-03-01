/*#include<iostream>

using namespace std;
class Y;
class X{
    int data;
    friend void add(X o1 , Y o2);
    public:
        void Setdata(int value){
            data = value;
        }
};
class Y{
    int num;
    friend void add(X o1 , Y o2);
    public:
        void Setnum(int value){
            num = value;
        }
};

void add(X o1 , Y o2){
    cout<<"Adding data of X and Y classes's objects give "<<o1.data + o2.num<<endl;
}


int main(){
    X a1;
    a1.Setdata(4);
    Y b1;
    b1.Setnum(10);
    add(a1,b1);
    return 0;
}*/
#include<iostream>
using namespace std;
class c2;
class c1{
    int lv1;
    friend void swapunc(c1 &o1 , c2 &o2);
    public:
    void setlv1(int x){
        lv1 = x;
    }
    void display(void){
        cout<< lv1 <<endl;
    }
};
class c2{
    int lv2;
    friend void swapunc(c1 &o1 , c2 &o2);
    public:
    void setlv2(int x){
        lv2 = x;
    }
    void display(void){
        cout<< lv2 <<endl;
    }
    
};

void swapunc(c1 & lv1 , c2 & lv2){
    int tmp = lv1.lv1;
    lv1.lv1 = lv2.lv2;
    lv2.lv2 = tmp;
    
};

int main(){
    c1 oc1;
    int x , y;
    cout<<"Enter the value of x and y which are objects of class1 and class 2 repectively "<<endl;
    cin>>x;
    cin>>y;
    oc1.setlv1(x);
    c2 oc2;
    oc2.setlv2(y);


    swapunc(oc1 , oc2);
    cout<<"The value of oc1 after swapping is "<<endl;
    oc1.display();
    
    cout<<"The value of oc2 after swapping is "<<endl;
    oc2.display();


    return 0;
}