#include <iostream>
using namespace std;
int  main(){
    int a;
    cout<<"Enter the number of which you want the table"<<endl;
    cin>>a;
    for (int i = 1; i <= 10; i++)
    {
        cout<<a<<" x "<<i<<" = "<<(a*i)<<endl;
    }
    
    return 0;
}