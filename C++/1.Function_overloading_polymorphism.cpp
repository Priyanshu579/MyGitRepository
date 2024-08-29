#include<iostream>
// This is called Polymorphism which mean is same naame different kaam 😁
using namespace std;
float volume(float r, float h);
float volume(float a);
float volume(float l, float b, float h);
int main(){
    cout<<"The volume of Cylander is : "<<volume(2.3, 1.5)<<endl;
    cout<<"The volume of Cube is : "<<volume(2.3)<<endl;
    cout<<"The volume of Cuboid is : "<<volume(2.4, 2.3, 1.5)<<endl;
    return 0;
}

float volume(float r, float h){
    cout<<"This is a Cylender"<<endl;
    return (3.14 * r * r * h);
}
float volume(float a){
    cout<<"This is a Cube"<<endl;
    return (a * a * a);
}
float volume(float l, float b, float h){
    cout<<"This is a Cuboid"<<endl;
    return (l * b * h);
}