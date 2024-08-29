#include<iostream>
using namespace std;
// Constructor in derived classes
class Base1{
    private:
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 class constructor called."<<endl;
    }
    void print_dataBase1(){
        cout<<"The value of data1 is : "<<data1<<endl;
    }
};

class Base2{
    private:
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class constructor called."<<endl;
    }
    void print_dataBase2(){
        cout<<"The value of data2 is : "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2{
    private:
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b){// It's a special syntax for sometime when i want to invoked Base class constructor.
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor called."<<endl;
    }
    void print_dataDerived(){
        cout<<"The values of derived1 and derived2 are : "<<derived1<<" and "<< derived2 <<endl;
    }
};

int main(){
    Derived harry(1, 2, 3, 4);
    harry.print_dataBase1();
    harry.print_dataBase2();
    harry.print_dataDerived();
    return 0;
}