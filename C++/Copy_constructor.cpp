#include<iostream>
using namespace std;
class harry{
    private:
    int a,b,c;
    public:
    harry(void){
        this->a =  10;
        this->b = 20;
        cout<<" Default Constructor overloading."<<endl;
    }
    // copy constructor
    // harry(harry &obj){ 
    //     a =  obj.a;
    //     b = obj.b;
    //     cout<<" Copy Constructor called.."<<endl;
    // }
    
    harry(int x, int y, int z = 100){
        this->a = x;
        this->b = y;
        this->c = z;
        cout<<"Constructor overloading..."<<endl;
    }
};
int main(){
    harry o1(2,3),o3(12,0,23);
    // copy constructor 
    harry o2(o1);
    return 0;
}