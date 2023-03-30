#include<iostream>
using namespace std;

class Footballteam{
    string a;
    public:
        void setfootballteam (void){
           a = "Realmadrid" ;
        };
        void getfootballteam(void){
            cout<<"The football team name is "<<a<<endl;
        }

};
class Teamplayers : public Footballteam{
    protected:
        string b;
    public :
        void setTeamplayer (string x){
         b = x; 
        }
        void getTeamplayer(void){
           cout<<"The football team player name is "<<b<<endl; 
        }
};
class Playerachievements : public Teamplayers{
    int a ;
    int c ;
    int d ;
    string f ;
    public:
        void SetBallondor(int x){
            a = x;
            
        }
        void SetGoldenBoot(int y){
            c = y;
        }
        void SetUCL(int z){
            d = z;
        }
        void SetPlayerofcentury(string a){
            f = a;
        }
        void getBallondor(void){cout<<"The number of Ballondor "<<b<<"have won are "<<a<<endl;}
        void getGoldenBoot(void){cout<<"The number of GoldenBoot "<<b<<"have won are "<<c<<endl;}
        void getUCL(void){cout<<"The number of UCL "<<b<<"have won are "<<d<<endl;}
        void getPlayerofthecentury (void){cout<<"The  Player of the century is "<<f<<endl;}
};
int main(){
    Playerachievements a;
    a.setfootballteam();
    a.getfootballteam();
    a.setTeamplayer(" Cristiano Ronaldo ");
    a.getTeamplayer();
    a.SetBallondor(5);
    a.SetGoldenBoot(4);
    a.SetUCL(5);
    a.SetPlayerofcentury(" Cristiano Ronaldo ");
    a.getBallondor();
    a.getGoldenBoot();
    a.getUCL();
    a.getPlayerofthecentury();
}