#include <iostream>
using namespace std;
int factorial(int a ){
    if (a<=1){
        return 1;
    }
    return a * factorial(a-1);
}
int fib(int a ){
    if(a<2){return 1;}
    return fib(a-1) + fib (a-2);
}
int main(){
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"The factorial of "<<x<<" is "<<factorial(x)<<endl;
    cout<<"The value of fibonacci at "<<x<<" is "<<fib(x)<<endl;
    return 0;
}