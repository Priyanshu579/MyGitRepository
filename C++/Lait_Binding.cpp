#include<iostream>
using namespace std;
// This is a example of ***Compile time polymorphism and *** Run time polymorphism
class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying Base class variable var_base : "<<var_base<<endl;
        cout<<"Displaying Derived class variable var_derived : "<<var_derived<<endl;
    }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}