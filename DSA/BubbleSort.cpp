#include<iostream>
#include<vector>
using namespace std;
// Bubble sort Algorithm
int main(){
    vector<int> arr;
    arr= {1,3,23,2,45,56,67,243,32,21};
    int n = 10;
    for(int i=0; i<n; i++){
        // for round 1 to n-1;
        for(int j=i; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
       cout<<"Vec "<<i+1<<" is "<<arr[i]<<endl;
    }
    
    return 0;
}