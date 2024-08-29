#include<iostream>
using namespace std;

class Complex{
    private:
    int a , b;

    public:
    Complex(){
        a = 0;
        b = 0;
    }
    Complex(int x, int y){
        a = x;
        b = y;
    }
    Complex(int x){
        a = x;
        b = 0;
    }
    void printFunc(void){
        cout<<"The complex number is : "<<a<< " + "<<b<<"i"<<endl;
    }
};

int main(){
Complex c2(10,20);
c2.printFunc();
Complex c3(100);
c3.printFunc();
    return 0;
}