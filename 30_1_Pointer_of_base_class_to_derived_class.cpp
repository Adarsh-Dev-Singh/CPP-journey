#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        
        void get(void){
            cout<<"The value of variable of base class is "<<var_base<<endl;
        }

};
class Derived : public BaseClass{
    public:
        int var_Derived;
        void get(void){
            cout<<"The value of variable of base class is "<<var_base<<endl;
        } 
};
int main(){
    BaseClass *ptr_Base_Class;
    BaseClass obj_Base_Class;
    Derived obj_Derived_Class;
    ptr_Base_Class = & obj_Derived_Class;

    // ptr_Base_Class->var_Derived=500;
    // ptr_Base_Class->get();


    ptr_Base_Class->var_base = 35000;
    ptr_Base_Class->get();

    return 0;
}
