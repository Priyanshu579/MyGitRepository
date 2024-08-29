#include<iostream>
// Destructor
// Destructor never takes an arguments nor does it return any value.
using namespace std;
int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when Constructor is called for object number"<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when Destructor is called for object number"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"Entering in main function: "<<endl;
    num n1;
    {
        cout<<"Now we are entering in a block : "<<endl; // These are block level objects and after finish this block they will distroy.
        num n2, n3;
    }
    return 0;
}