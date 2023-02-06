#include<iostream>
using namespace std;
// inline int product(int a , int b ){
//     int c = 1;
//     c = c+1;
//     return a*b*c;
// };
// If a function is called several time then inline function is used to save time but don't use it for bigger
// functions or when recursions are there because it will take very large cache memory , 
// For more info. watch video 17 inline function cw harry.
float interest(int money , float money_interest = 1.05 /*if no value is passed then compiler will work with default value*/){
      return (money * money_interest); 
}
int main(){
    // int x , y;
    // cout<<"Enter the value of x and y"<<endl;
    // cin>>x>>y;
    // for (int i = 1; i < 2; i++)
    // {
    //    cout<<"The product of x and y is "<<product(x,y)<<endl;
    // }
    int money;
    cout<<"Enter the money"<<endl;
    cin>>money;
    cout<<"The money you will get after 1 year is "<<interest(money)<<endl;
    cout<<"For VIP : The money you will get after 1 year is "<<interest(money,1.1)<<endl;
    return 0;
}