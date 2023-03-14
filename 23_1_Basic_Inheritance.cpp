#include<iostream>
using namespace std;

class Series{
    public:
        int SeriesEpnum;
        Series(){};
        Series(int a){
            SeriesEpnum = a;
        }

};
class Anime : public Series{
    public:
        int AnimeEpnum;
        Anime(){};
        Anime(int x){
          int p = 0;
          SeriesEpnum = x;
           
           AnimeEpnum = x;
        
        }
        void getdata(){
            cout<<"The number of anime this person have seen is "<<AnimeEpnum<<endl;
        }
};

int main(){
    Series Dark(10) , Strangerthings;
    // cout<<Dark.SeriesEpnum<<endl;
    
    Anime Monster(74) ;
    Monster.getdata();
    Anime Deathnote(38);
    Deathnote.getdata();
    Anime Tokyoghoul(13);
    Tokyoghoul.getdata();
    Anime Promisedneverland(13);
    Promisedneverland.getdata();
    // cout<<Monster.SeriesEpnum<<endl;

    return 0;
}