#include<iostream>
using namespace std;
template <class T>
class Wolverine{
	public:
	T data;
	Wolverine(T a){
	data = a;
		}
	void display();
};

template <class T>
void Wolverine<T> :: display(){
	cout<<data<<endl;
}

/*void Logan(int a){
	cout<<"The name of main character is logan"<<endl;
}*/

template <class T>
void Logan(T a){
	cout<<"The name of main character is Wolverine"<<endl;
}

int main(){
	/*Wolverine <int> A(5);
	cout<<A.data<<endl;
	A.display();*/

	Logan(5);


	

	return 0;
}