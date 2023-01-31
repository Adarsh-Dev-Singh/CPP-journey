#include<iostream>
using namespace std;
typedef struct Employee
{
    int age ;
    string name;
    float coding_experience;
    char gender;
    string favnovel;
    
} ep;
union money
{
    int movies;
    float rupees;
    float dollars;
};
int main(){
    // **STRUCTURES**
    // ep Badal;
    // Badal.age = 14;
    // Badal.name = "Badal Singh Chib";
    // Badal.gender = 'M';
    // Badal.favnovel = "Harry Potter Series";
    // Badal.coding_experience = 0;
    // cout<<"The value is "<< Badal.age<<endl;
    // cout<<"The value is "<< Badal.coding_experience<<endl;
    // cout<<"The value is "<< Badal.favnovel<<endl;
    // cout<<"The value is "<< Badal.gender<<endl;
    // cout<<"The value is "<< Badal.name<<endl;
     
    // **UNION**
    // union money m1;
    // m1.movies  = 50;
    // cout<<m1.movies<<endl;

    // **ENUM**
    enum programming_language{Python , Cpp , C , Java};
    programming_language pl = Java;
    cout<<(pl == 2);
    return 0;
}