#include<iostream>
// Template demonstrating
using namespace std;
template <class T>
class vector{
    public:
    T *arr;
    int size;
    vector(int a){
        size = a;
        arr = new T[size];
    }
    T dotProduct(vector &v){
        T d = 0;
        for(int i=0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main(){
    vector<int> v1(3);
    v1.arr[0] = 2;
    v1.arr[1] = 1;
    v1.arr[2] = 4;
    vector<int> v2(3);
    v2.arr[0] = 1;
    v2.arr[1] = 3;
    v2.arr[2] = 2;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;

    vector<float> v1(3);
    v1.arr[0] = 2.0;
    v1.arr[1] = 1.2;
    v1.arr[2] = 4.0;
    vector<float> v2(3);
    v2.arr[0] = 1.4;
    v2.arr[1] = 3.3;
    v2.arr[2] = 2.1;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
}