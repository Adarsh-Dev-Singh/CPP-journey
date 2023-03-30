#include<iostream>
using namespace std;

class Series{
    public:
        int SeriesEpnum;
        Series(){};
        void Serie(){
            SeriesEpnum = 10;
        }

};
class Anime : public Series{
    public:
        int AnimeEpnum;
        Anime(){};
        Anime(int x){
          int p = 0;
          AnimeEpnum = x;
        
        }
        void getdata(){
            cout<<"The number of anime Ep this person have seen is "<<AnimeEpnum<<endl;
            cout<<"The number of Series Ep this person have seen is "<<SeriesEpnum<<endl;
        }
};

int main(){
    Series Dark , Strangerthings;
    // cout<<Dark.SeriesEpnum<<endl;
    
    Anime Monster(74) ;
    Monster.Serie();
    Monster.getdata();
    Anime Deathnote(38);
    Deathnote.Serie();
    cout<<Deathnote.SeriesEpnum<<endl;   
    Deathnote.getdata();  
    Anime Tokyoghoul(13);
    Tokyoghoul.Serie();
    Tokyoghoul.getdata();
    Anime Promisedneverland(13);
    Promisedneverland.Serie();
    Promisedneverland.getdata();
    // cout<<Monster.SeriesEpnum<<endl;

    return 0;
}