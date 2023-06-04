#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base = 1 ;
    virtual void get(void){  // If virtual func. is there then other get will be used which is in derived class--->*
        cout<<"The value of variable var_base is "<<var_base<<endl;
    }
};// *---> otherwise base class function will be called 

class DerivedClass: public  BaseClass{
    public:
    int var_derived = 2;
    void get (void){
        cout<<"The value of variable var_base is "<<var_base<<endl;
        cout<<"The value of variable var_derived is "<<var_derived<<endl;
    }

};

int main(){
    BaseClass *base_class_ptr;
    BaseClass base_class_obj;
    DerivedClass derived_class_obj;
    // DerivedClass *derived_class_ptr;

    base_class_ptr = &derived_class_obj;

    base_class_ptr->var_base = 100;
    // derived_class_ptr->var_derived = 10;

    base_class_ptr->get();
    // derived_class_ptr->get();


    // --> The comments are responsible for some run time error Doono what;;;;
    return 0;
}