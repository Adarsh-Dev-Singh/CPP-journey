#include <iostream>
using namespace std;
float volume(double r , double h){
        return (3.14 * r * r * h );
    }
float volume(double r){
        return ((4/3) * 3.14 * r * r * r );
    }

int main(){
    cout<<"The volume of cylinder of radius of 5 and height 6 is "<<volume(5,6)<<endl;
    cout<<"The volume of sphere of radius of 5 is  "<<volume(5)<<endl;
    return 0;
}