#include <iostream>
using namespace std;
// Pointers_to_objects
class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The real value is : " << real << endl;
        cout << "The imaginary value is : " << imaginary << endl;
    }
};
int main()
{
    Complex c1;
    // Complex *ptr = &c1; // or //
    Complex *ptr = new Complex;

    // (*ptr).setData(12,34);
    // (*ptr).getData();
    ptr->setData(12, 34); // Arrow operator
    ptr->getData();

    // Array of objects
    Complex *ptrr = new Complex[3];
    // ptrr->setData(1,2);
    // (ptrr+1)->setData(3,4);
    // (ptrr+2)->setData(5,6);
    // ptrr->getData();
    // (ptrr+1)->getData();
    // (ptrr+2)->getData();
    return 0;
}