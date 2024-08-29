// This is all about classes
#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
    int secretPassword;

    public:
    string name;
    int salary;

    Employee(string name, int salary, int secretPassword){
        this->name = name;
        this->salary = salary;
        this->secretPassword = secretPassword;
    }

    void printDetails(){
        cout<<"The name of our first employee is "<<this->name << " and his salary is "<<this->salary <<" dollar and the password is : "<<this->secretPassword<<endl;
    }

};

class Programmer : public Employee{
    public:
    int errors;
};

int main(){
    Employee har("Harry",10000,234011);
    har.printDetails();
    return 0;
}