#include <iostream>
// Linear and Binary search in an array.
using namespace std;

int linear_search(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int n, int element)
{
    int first = 0;
    int last = (n - 1);
    int mid = (first + last) / 2;  // or // 
    // We can use here mid = first + (last - first)/2; for safety from intejer overflow i'mean if two number's sum is double so that time what will we do?
    while (first <= last)
    {
        if (arr[mid] == element)
        {
            return mid;
        }
        if (element > arr[mid])
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
        mid = (first + last) / 2; //or// mid = first + (last - first)/2;
    }
    return -1;
}

int main()
{
    // Linear search
    // int arr[]= {2,34,343,12,45,2,12,2};
    // int element = 12;
    // int index = linear_search(arr,sizeof(arr),element);
    // cout<<"The element '"<<element<<"' is on index no. "<<index<<endl;

    // Binary search
    int arr[] = {12, 34, 45, 56, 67, 78, 89, 90};
    int element = 90;
    int size = sizeof(arr);
    int index = binary_search(arr, size, element);
    cout << "The element '" << element << "' is on index no. " << index << endl;
    return 0;
}