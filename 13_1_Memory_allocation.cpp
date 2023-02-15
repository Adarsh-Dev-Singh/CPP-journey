#include <iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemprice[100];
    int counter;
    public:
        void initcounter(void){counter = 0;}
        void setprice(void);
        void display_price(void);

};
void Shop ::setprice(void){
    cout<<"Enter the Id number of your item"<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item "<<endl;
    cin>>itemprice[counter];
    counter ++;
}
void Shop ::display_price(void){
    for(int i = 0 ; i < counter; i++){
        cout<<"The price of item with itemId "<<itemId[i]<<" is "<<itemprice[i]<<endl;
    }
}

int main(){
    Shop Shivaaybakers;
    int a ;
    cout<<"How many items do you want to input "<<endl;
    cin>>a;
    Shivaaybakers.initcounter();
    for(int x = 0; x<a; x++){
        Shivaaybakers.setprice();

    }
    Shivaaybakers.display_price();
    return 0;
}