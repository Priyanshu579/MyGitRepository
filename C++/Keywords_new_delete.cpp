#include<iostream>
using namespace std;
int main(){
    int *ptr = new int[3];
    cout<<"Enter the values :"<<endl;
    for(int i=0; i<3; i++){
        cin>>*(ptr+i);
    }
    delete  [] ptr;
    for(int i=0; i<3; i++){
        cout<<"The value of "<<i<<" "<<*(ptr+i)<<endl;
    }
    return 0;
}