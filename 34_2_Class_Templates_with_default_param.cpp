#include<iostream>
using namespace std;

template < class T1 = int , class T2 = float , class T3 = char > 

class Ansh{
	public:
	T1 a;
	T2 b;
	T3 c;
	Ansh(T1 x , T2 y , T3 z){
	a = x;
	b = y;
	c = z;
	}
	void display(){
	cout<<"The value of a is : "<<a <<endl<<"The value of b is : "<<b<<endl
	    <<"The value of c is : "<<c<<endl<<endl<<endl;
	}
};

int main(){
	string m = "Cristiano Ronaldo";
	int n = 38;
	string o = "Over the course of his career,\n Portuguese footballer Cristiano Ronaldo has received five Ballon d'Or/FIFA Ballon d'Or awards,\nthe most for a European player. \nWidely regarded as one of the greatest players of all time,\nRonaldo holds the record for most goals and assists in the UEFA Champions League (140 and 42 respectively),and the record for most goals in the UEFA European Championship (14), its qualification stage (35),and the FIFA Club World Cup (7), \nas well as most goals scored in a UEFA Champions League season (17), most international goals (122), \nand most appearances in a European national team (198). \nHe has scored a record 837 senior career goals for club and country. \nMoreover, he is one of the few recorded players to have made over 100 professional career appearances.\nCollectively, Ronaldo has won 32 senior trophies in his career. \nHe has also attained one title from youth and at least five titles from friendly competitions. \nAll in all he had won over 300 trophies and medals by January 2021, with some of them dating back to his childhood";


	Ansh <> Lassi(2,3.4,'x');
	Lassi.display();
	

	Ansh <string , int , string> Jaljeera(m,n,o);
	Jaljeera.display();

	return 0;

}