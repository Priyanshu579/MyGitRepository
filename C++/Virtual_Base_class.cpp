#include<iostream>
using namespace std;
// Virtulal Base class
class Student{
    protected:
    int roll_no;
    public:
    void set_roll_no(int roll){
        roll_no = roll;
    }
    void get_roll_no(){
        cout<<"Your roll no is : "<<roll_no<<endl;
    }
};

class Test : virtual public Student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void get_marks(){
        cout<<"Your result is here : "<<endl
        <<"Maths : "<<maths<<endl
        <<"Physics : "<<physics<<endl;
    }
};

class Sports : virtual public Student{
    protected: 
    int score;
    public:
    void set_score(int sc){
        score = sc;
    }
    void get_score(){
        cout<<"Your PT score is : "<<score<<endl;
    }
};

class Result : public Test, public Sports{
    private:
    float total;
    public:
    void display(){
        total = maths + physics + score;
        get_roll_no();
        get_marks();
        get_score();
        cout<<"Your total score is : "<<total<<endl;
    }
};

int main(){
    Result harry;
    harry.set_roll_no(14);
    harry.set_marks(78.0,89.0);
    harry.set_score(92);
    harry.display();
    return 0;
}