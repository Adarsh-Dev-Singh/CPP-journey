#include<iostream>
using namespace std;

class Manga{
    string nmg;
    int ratemg;
    public:
        void Setname_and_rating(void){
            cout<<"Enter the name of manga you've read"<<endl;
            cin>>nmg;
            cout<<"Enter the rating you would give it from 1 to 10"<<endl;
            cin>>ratemg;
        }
        void Getname_and_rating(void){
            cout<<"The Manga "<<nmg<<" is having a rating of "<<ratemg<<endl;
        }
};



int main(){
    Manga Slice_of_life[3];
    for (int i = 0; i < 3; i++)
    {
        Slice_of_life[i].Setname_and_rating();
        Slice_of_life[i].Getname_and_rating();
    }
    

    return 0;
}