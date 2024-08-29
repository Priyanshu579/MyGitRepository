#include<iostream>
using namespace std;
// Swaping in two classes's private member;

// forward declaration
class c2;
class c1{
    private:
    int val1;
    friend void exchange(c1 &, c2 &);
    public:
    void setValue(int a){
        val1 = a;
    }
    void getValue(){
        cout<<val1<<endl;
    }
};

class c2{
    private:
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
    void setValue(int a){
        val2 = a;
    }
    void getValue(){
        cout<<val2<<endl;
    }
};

void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 x;
    c2 y;
    x.setValue(2);
    y.setValue(4);
    exchange(x,y);
    x.getValue();
    y.getValue();
    return 0;
}