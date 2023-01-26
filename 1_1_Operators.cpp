#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 6;
    cout<<"Following are the arithmetic operators\n";
    cout << "The answer of a + b is " << a + b << endl;
    cout << "The answer of a * b is " << a * b << endl;
    cout << "The answer of a / b is " << a / b << endl;
    cout << "The answer of a ++ is " << a++ << endl;
    cout << "The answer of a-- is " << a-- << endl;
    cout << "The answer of ++a  is " << ++a << endl;
    cout << "The answer of --a is " << --a << endl;
    cout << "The answer of a % b is " << a % b << endl;
    cout<<endl;
    cout<<"Following are the comparison operators\n";
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<endl;
    cout<<"Following are the logical operators\n";
    cout<<"The value of ((a==b) && (a>b)) is "<<((a==b) && (a>b))<<endl;
    cout<<"The value of ((a==b) || (a>b)) is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a!=b) && (a>b)) is "<<((a!=b) && (a>b))<<endl;
    cout<<"The value of ((a!=b) || (a>b)) is "<<((a!=b) || (a>b))<<endl;
    cout<<"The value of ((a<=b) && (a>b)) is "<<((a<=b) && (a>b))<<endl;
    cout<<"The value of ((a<=b) || (a>b)) is "<<((a<=b) || (a>b))<<endl;
    cout<<"The value of ((a==b) && (a!=b)) is "<<((a==b) || (a!=b))<<endl;
    cout<<"The value of ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    return 0;
}