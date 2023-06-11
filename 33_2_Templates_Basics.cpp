#include<iostream>
using namespace std;

template <class M>

class vector{
    public:
    M *arr;
    int size;
    vector(int m){
        size = m;
        arr = new M [size];
    }
    M dotProduct(vector &a){
        M sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->arr[i] * a.arr[i];
        }
        return sum;
    }
};

int main(){
    vector <float> a(3);

    a.arr[0] = 1.2;
    a.arr[1] = 5.3;
    a.arr[2] = 7.5;
    vector <float>  b(3);
    b.arr[0] = 3.2;
    b.arr[1] = 2.1;
    b.arr[2] = 6.9;
    float lassi;
    lassi = b.dotProduct(a);
    cout<<lassi;

    return 0;
}