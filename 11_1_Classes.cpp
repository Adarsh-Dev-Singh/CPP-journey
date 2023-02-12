#include<iostream>
using namespace std;
class factory{
    private:
        int anime;
        int manga;
    
    public:
        string novels;
        string laptop;
        string linux;
    void setdata(int a , int b , string c , string  d , string e );
    void getdata(){
        cout<<"The number of anime seen : "<<anime<<endl;
        cout<<"The number of manga read : "<<manga<<endl;
        cout<<"The novels are : "<<novels<<endl;
        cout<<"The laptops are : "<<laptop<<endl;
        cout<<"The  linux are : "<<linux<<endl;
    };
};
void factory :: setdata(int a , int b , string c , string  d , string e ){
    anime = a;
    manga = b;
    novels = c;
    laptop = d;
    linux = e;
}
int main(){
    factory Badal;
    Badal.setdata(10,3,"Sherlock holmes , AGGGTM , GGBB , Alchemist", "HP , DELL" , "Manjaro , UBUNTU , KALI");
    Badal.getdata();
    return 0;
}

