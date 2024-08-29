#include<iostream>
// Static variable
using namespace std;
class Employee{
    private:
    int id;
    // int count = 0;
    static int count; // static variables always initialise from 0;
    public:
    void setData(){
        cout<<"Enter your id : ";
        cin>>id;
        count++;
    }
    void getData(){
        cout<<"The id of this employee is "<<id<<" and this employee number : "<<count<<endl;
    }
    static void getCount(){          // static member function and it can access only static variables.
        cout<<"The value of count is : "<<count<<endl;
    }
};
// count is the static data member of employee class.
int Employee :: count;                 //count=1000;   // Default value is always 0;

int main(){
    Employee harry, shubham, lovish;
    harry.setData();
    harry.getData();
    // harry.getCount();
    Employee ::getCount();

    shubham.setData();
    shubham.getData();
    Employee ::getCount();

    lovish.setData();
    lovish.getData();
    Employee ::getCount();
    return 0;
}