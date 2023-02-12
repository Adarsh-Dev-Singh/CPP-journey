#include<iostream>
using namespace std;

class binary{
    string s;

    public:
    void read(void);
    void chk_bin(void);
    void display(void);
    void ones_compliment(void);   
};
void binary :: read(){
    cout<<"Enter the binary number "<<endl;
    cin>>s;
}
void binary :: chk_bin(){
    for(int c = 0  ;c < s.length() ; c++){
        if(s.at(c) != '0' && s.at(c) != '1' ){
            cout<<" Wrong Binary Format "<<endl;
            exit(0);
        }
    }
 }
void binary :: display(){
    cout<<"Displaying your binary number "<<endl;
    for(int c = 0  ;c < s.length() ; c++){
    cout<<s.at(c);}
    cout<<endl;
}
void binary :: ones_compliment(){
    for(int c = 0  ;c < s.length() ; c++){
        if(s.at(c) == '0'){
            s.at(c) = '1';
        }
        else{
            s.at(c) = '0';
        }
    }
}
int main(){
    binary a;
    a.read();
    a.chk_bin();
    a.display();
    a.ones_compliment();
    a.display();
    return 0;
}