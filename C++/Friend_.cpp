// Properties of friend functions
/*
1. Not in the scope of class
2. Can be invoked without the help of any object.
3. Can be declared inside public or private section of the class.
4. It cannot access the members directly by their, names
*/
#include<iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    void setNumber(int v1, int v2){
        a = v1;
        b = v2;
    }
    friend Complex sumComplex(Complex o1, Complex o2);//Now this is a friend of complex class but not a member function of this class
    void printNumber(){
        cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(2,3);
    c2.setNumber(4,2);
    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}