#include<iostream>
using namespace std;
int main(){
    int *a = new int(4);
    delete a; //--> It will give garbage value because we have already deleted that space which we created 
    //to store the number
    cout<<""<<a<<endl;
    cout<<""<<*a<<endl;
    // cout<<""<<new<<endl;//--> That doesn't work because new is a keyword used for allocating memory to a 
    // //class object in C++
    return 0;
}

// int main(){
//     int a = 4;
//     int *b = &a;
//     *b = 999;
//     cout<<"The new value  of a is "<<a<<endl;
//     return 0;
// }