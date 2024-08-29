#include<iostream>
using namespace std;
// Ambiguity in Multiple inheritance
class Base1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
    void greet(){
        Base2 :: greet();
    }
};

int main(){
    Base1 ba1;
    Base2 ba2;
    Derived der;
    ba1.greet();
    ba2.greet();
    der.greet();
    return 0;
}