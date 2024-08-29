#include<iostream>
// It should be initialize in public section.
using namespace std;
class Complex{
    private:
    int a ,b;
    public:
    void printData(){
        cout<<"The Complex number is : "<<a<<" + "<<b<<"i"<<endl;
    }
    Complex();  // default constructor it takes no arguments.
    Complex(int x, int y){ // Parameterized constructor 
        this->a = x;
        this->b = y;
    }
};


int main(){
    Complex c1(2,3),c2(4,6);
    c1.printData();
    c2.printData();
    return 0;
}