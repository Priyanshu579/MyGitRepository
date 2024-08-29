#include<iostream>
using namespace std;
// Multilevel inheritance
class Student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int r);
    void get_roll_number();
};

void Student::set_roll_number(int r){
    roll_number = r;
}
void Student::get_roll_number(){
    cout<<"The roll number is : "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks();
};

void Exam ::set_marks(float m, float p){
    maths = m;
    physics = p;
}
void Exam :: get_marks(){
    cout<<"The marks of maths is : "<<maths<<endl;
    cout<<"The marks of physics is : "<<physics<<endl;
}

class Result : public Exam{
    private:
    float percentage;
    public:
    void display(){
        get_roll_number();
        get_marks();
        cout<<"Your percentage is : "<<(maths + physics)/2<<"%"<<endl;
    }
};

int main(){
    Result harry;
    harry.set_roll_number(14);
    harry.set_marks(78.0,88.0);
    harry.display();
    return 0;
}