#include<iostream>
using namespace std;

class Employee{
    int Id;
    static int count;

    public:
        void Setdata(void){
            cout<<"Enter the Employee ID "<<endl;
            cin>>Id;
            count++;
        }
        void Getdata(void){
            cout<<"The Employee Id of the Employee on the Count "<<count<<" is "<<Id<<endl;
        }
            static void getcount(void){
          /*cout<<Id; this will give error because only a static member or function can be used in static function*/
            cout<<"The value of the count is "<<count<<endl;
        }
};

int Employee :: count;

int main(){
    Employee Ujwal, Badal , Mithu , Paru;
    Ujwal.Setdata();
    Ujwal.Getdata();
    Employee ::getcount();

    Mithu.Setdata();
    Mithu.Getdata();
    Employee ::getcount();

    Badal.Setdata();
    Badal.Getdata();
    Employee ::getcount();
   
    Paru.Setdata();
    Paru.Getdata();
    Employee ::getcount();



    return 0;
}