#include<iostream>
using namespace std;
int sum(int a , int b){
    int c = a + b;
    return c;
}
// Call by reference by reference variables
// int swap(int &a , int &b ){
//     int temp = a;
//     a = b;
//     b = temp;
// }
// Call by reference with the help of pointers
void swap(int* a , int* b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 3 ; int y = 4 ;
    cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"The value  (before swap) of a is "<< x <<" and b is "<< y <<endl;
    swap(&x,&y);
    cout<<"The value  (after swap) of a is "<< x <<" and b is "<< y <<endl;
    return 0;
}