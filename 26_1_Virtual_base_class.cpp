#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
        void set_roll_no(int rn){
            roll_no = rn;
        }
        void roll_number (void){
            cout<<"Your  roll number is :     ******    "<< roll_no <<"    ******"<<endl;
        }

};
class Marks : virtual public Student{
    protected:
    float maths;
    float science;
    public :
        void Set_Marks(float m , float s ){
            maths = m;
            science = s;
        }
        void Get_Marks(void){
            cout<< "The marks you got are :"<<endl
                << " Maths : " << maths <<endl
                << " Science : " << science <<endl;
        }
};
class Score :  public  virtual Student{
    protected:
    float sco_re;
    public :
        void Set_Score( float sc ){
            sco_re = sc;
        }
        void Get_Score(void){
            cout<< "The Score you got is : "<< sco_re <<endl;
                
        }
};
class Result  :  public Score ,  public Marks{
    protected:
    float Final;
    public :
            void Get_Final(void){
            Final = sco_re + maths + science;
            roll_number();
            Get_Marks();
            Get_Score();
            cout<< "The Final Result  you got is : "<< Final <<endl;
                
        }
};
int main(){
    Result Ujwal;
    Ujwal.set_roll_no(420);
    Ujwal.Set_Marks(88.9,99.8);
    Ujwal.Set_Score(9.99999);
    Ujwal.Get_Final();
    return 0;
}