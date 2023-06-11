#include<iostream>
using namespace std;

/*float averagefunc(int a , int b ){
	int c = (a + b)/2;
	return c;
}*/

template<class T >
void swapp(T &a , T &b){
	T temp = a;
	a = b;
	b = temp ;
}

int main(){
//	int x, y;
//	cout<<"Enter the numbers of which you want average"<<endl;
//	cin>>x>>y;
//	float avg = averagefunc(x,y);
//	printf("The average of the given input integers is %0.3f",avg);
	

	int x = 5 ;
	int y = 7;
	swapp(x,y);
	cout << x<<endl<<y;

	return 0;
}