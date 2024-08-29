// Template with multiple parameters.
#include<iostream>
#include<string>
using namespace std;
template <class T1, class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<"The data1 is : "<<data1<<endl;
        cout<<"The data2 is : "<<data2<<endl;
    }
};
int main(){
    myClass<int,char> obj(2,'P');
    obj.display();
    myClass<float,string> obj2(91.02,"Priyanshu");
    obj2.display();
    return 0;
}