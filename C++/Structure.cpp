#include <iostream>
using namespace std;
struct oleLellu
{
    int num_arr[2];
    char ch_arr[2];
    int pointer = 0;
} ole;
int main()
{
    cout << "Hello world" << endl;
    cout << "Enter your data : "<<endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter your roll no. : ";
        cin >> ole.num_arr[i];
        cout << "Enter your favourite character : ";
        cin >> ole.ch_arr[i];
        ole.pointer = ole.pointer + 1;
    }
    for (int i = 0; i <ole.pointer; i++)
    {
        cout<<" Data no. "<<i+1<<endl;
        cout<<"your roll no. is : "<<ole.num_arr[i]<<endl;
        cout<<"your favourite character is : "<<ole.ch_arr[i]<<endl;
    }
    
    return 0;
}