#include <iostream>
using namespace std;
// Here we are making a simple calculator
int calculator();
void process(float a, float b, char op);
int main()
{
    int chances;
    do
    {
        chances = calculator();
    } while (chances != 0);
    cout << "Thankyou and visit again" << endl;
    return 0;
}
int calculator()
{
    float a, b;
    char op;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout << "Enter your operator : " << endl;
    cin >> op;
    process(a, b, op);
    int moreChance;
    cout << "You wants more calculations : " << endl;
    cin >> moreChance;
    return moreChance;
}
void process(float a, float b, char op)
{
    switch (op)
    {
    case '+':
        cout << "Total sum is : " << (a + b) << endl;
        break;
    case '-':
        cout << "Subtraction is : " << (a - b) << endl;
        break;
    case '*':
        cout << "Multiplication is : " << (a * b) << endl;
        break;
    case '/':
        cout << "Division is : " << (a / b) << endl;
        break;
    default:
        cout << "Check your entries" << endl;
    }
}