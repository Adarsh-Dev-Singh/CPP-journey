#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter your age \n";
    cin>>a;
    if(100>a && a>18){
        cout<<"You can drive a motor vechile\n";
    }
    else if(a<=18 && a>=13){
        cout<<"You can not drive motor vechile\n";
    }
    else if(a<=12 && a>=4){cout<<"Baby play with Hotwheels \n";}
    else if (a<=3){cout<<"Shoti Bachi ho kya!!!\n";}
    else if(a>=100){cout<<"Bhudau you will kill someone or you are already in between heaven or hell";}
    else{cout<<"First learn how to give Input!!! else the person who have written this program is moron";}
    
    return 0;
}