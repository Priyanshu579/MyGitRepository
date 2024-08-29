#include <iostream>
// New and Delete
using namespace std;
int main()
{
    // int *ptr = new int(12);
    // cout<<"The value of ptr is : "<<*ptr;

    int *arr = new int[5];
    // arr[0]= 12;
    // arr[1]= 13;
    // We can use like this
    *arr = 12;
    *(arr + 1) = 13;
    arr[2] = 14;
    arr[3] = 15;
    arr[4] = 16;
    // delete[] arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of arr " << i << " " << arr[i] << endl;
    }
}