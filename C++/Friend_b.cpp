#include <iostream>
using namespace std;

// forward declaration
class Complex; // If we are using some classes without declaration so that we need of forward declaration.
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex o1, Complex o2);
};

class Complex
{
private:
    int a, b;
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);  // If we need only some functions as a friend
    friend class Calculator;  // If i want to make many function to as friends so we can make a whole class a friend.
public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex c1, c2;
    c1.setNumber(2, 3);
    c2.setNumber(1, 4);
    Calculator h1;
    int sum = h1.sumRealComplex(c1, c2);
    cout << "The sum of two real number of o1 and o2 is : " << sum << endl;
    return 0;
}