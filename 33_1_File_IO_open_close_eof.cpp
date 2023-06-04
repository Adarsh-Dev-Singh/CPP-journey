#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream ujwal;
    ujwal.open("friend.txt");
    ujwal<<"X-MEN ORIGINS : WOLVERINE  \nThe early years of James Logan,  \nfeaturing his rivalry with his brother Victor Creed, \nhis service in the special forces team Weapon X,  \nand his experimentation into the metal-lined mutant Wolverine.\n";
    ujwal.close();

    ifstream badal;
    badal.open("Friend.txt");
    string st;
    while(badal.eof()==0){
       getline(badal , st);
       cout<<st;
    }
    badal.close();

    return 0;
}

