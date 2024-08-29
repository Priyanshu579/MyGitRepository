#include<iostream>
// FUNCTION TEMPLATE
using namespace std;
template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

// In the situation of function overloading
// If there are many functions like one func is normal func and one is like which make by templates. So which func should be run first ?
//  Answer is : Excate match will be invoke first, than template's func will be run.


int main(){
    int X = 12;
    int Y = 23;
    swapp(X,Y);
    cout<<X<<endl<<Y;
    return 0;
}