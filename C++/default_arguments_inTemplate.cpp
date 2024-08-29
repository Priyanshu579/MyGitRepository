#include <iostream>
using namespace std;
// Here we are demonstrating the default arguments in template.
//  I am writing something here only for enjoyment
template <class t1=int, class t2=float>
class myClass
{
public:
    t1 data1;
    t2 data2;
    myClass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "Data1 is :" << this->data1 << endl
             << "Data2 is : " << this->data2 << endl;
    }
};
int main()
{
    myClass<> m1(23, 76.23);
    myClass<string, float> m2("12th's percenage", 91.2);
    m1.display();
    m2.display();
    return 0;
}