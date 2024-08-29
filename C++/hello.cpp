#include <iostream>
#include <string> // this library for string's functions
// If i want to resolve the lait binding problem so therefore we will be use the virtual function.
using namespace std;
class BaseClass
{
public:
    int var_Base = 100;
    virtual void display()
    {
        cout << "The value of var_Base is : " << var_Base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 200;
    void display()
    {
        cout << "The value of var_Derived is :" << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}