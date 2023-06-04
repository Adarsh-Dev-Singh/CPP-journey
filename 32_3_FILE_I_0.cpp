#include<iostream>
#include<fstream>
using namespace std;



int main(){
    string a;
    // ofstream lassi("lassi.txt");
    // lassi<<"My name is RAJ aur Vizukama ki Takkar";

    ifstream bassi("lassi.txt");
    getline(bassi , a);
    getline(bassi , a);
    cout<<a;
    
    return 0;
}