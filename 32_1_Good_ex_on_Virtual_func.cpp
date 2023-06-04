#include <iostream>
using namespace std;

class Fullmetal_Alchemist{
    protected:
    int main_char;
    string Genre;
    public:
    Fullmetal_Alchemist(int a , string b){
        main_char = a;
        Genre = b;
    }
    virtual void display(){}
};

class Conqueror_Of_Shambala : public Fullmetal_Alchemist{
    private:
    string Story_line_1;
    public:
    Conqueror_Of_Shambala(int a , string b , string c) : Fullmetal_Alchemist(a,b){
        Story_line_1 = c;
    }
    void display(){
        cout<<"\nThe number of character in Fullmetal - Conqueror of Shambala are : "<<main_char<<endl;
        cout<<"The Genre of Fullmetal - Conqueror of Shambala is : "<< Genre<<endl;
        cout<<"FullMetal Alchemist - Conqueror of Shambala : "<<
        endl<<Story_line_1<<"\n"<<endl;
    }
};
class Brotherhood : public Fullmetal_Alchemist{
    private:
    string Story_line_2;
    public:
    Brotherhood(int a , string b , string c) : Fullmetal_Alchemist(a,b){
        Story_line_2 = c;
    }
    void display(){
        cout<<"The number of character in Fullmetal Alchemist - Brotherhood are : "<<main_char<<endl;
        cout<<"The Genre of Fullmetal Alchemist - Brotherhood is : "<< Genre<<endl;
        cout<<"FullMetal Alchemist - Brotherhood : "<<
        endl<<Story_line_2<<"\n"<<endl;
    }
};

int main(){
    int characters = 2;
    string Genre = "Adventure";
    string Story_FMA_COS ="It follows the story after FMA where Edward Elric and Alphonse Elric are in different Worlds and how they get united at the END...... ";
    string Story_FMAB = "It is adapted wholly from the manga unlike FMA  and  has a completely different Ending and it is also more appreciated by the critics.....";

    Conqueror_Of_Shambala FirstArc(characters, Genre , Story_FMA_COS);
    // FirstArc.display();
    Brotherhood SecondArc(characters , Genre , Story_FMAB);
    // SecondArc.display();

    Fullmetal_Alchemist*Arcs[2];
    Arcs[0]= &FirstArc;
    Arcs[1]= &SecondArc;

    Arcs[0]->display();
    Arcs[1]->display();


    return 0;
}