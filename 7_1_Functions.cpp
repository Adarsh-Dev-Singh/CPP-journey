#include <iostream>
using namespace std;

int sum(int a , int b){
    int c = a + b;
    // a and b are formal parameters -i.e takes value from x and y
    return c;
}


int main(){
    int x,y;
    cout<<"Enter the First number"<<endl;
    cin>>x;
    cout<<"Enter the Second number"<<endl;
    cin>>y;
    cout<<"The sum of given numbers is "<<sum(x,y)<<endl;
    // Here x and y are actual parameters

    return 0;
}