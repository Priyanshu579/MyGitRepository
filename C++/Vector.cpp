#include<iostream>
// Vector demonstrating
#include<vector>
using namespace std;
// We can use template here.
template <class T>
void display(vector <T> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
vector <int> vec1; // Zero length integer vector
vector <char> vec2(4); // 4-length character vector
int element, size=5;
vec2.push_back('C');
display(vec2);
// cout<<"Enter the size of your vector : ";
// cin>>size;
// for(int i=0; i<size; i++){
//     cout<<"Enter an element to add to this vector : ";
//     cin>>element;
//     vec1.push_back(element);
// }

// vec1.pop_back();
// display(vec1);
// vector <int> :: iterator iter = vec1.begin();
// vec1.insert(iter, 566);

// If i wanna print 566 at index 2 so we'll use it
// vec1.insert(iter+1, 566);

// If i wanna print 566 many times like 500 times so we can use it.
// vec1.insert(iter+1,500, 566);

// display(vec1);
    return 0;
}

/*
Methods of vector
vec1.size()
vec1.push_back(element);
vec1.pop_back("last element");
vec1.at(i);
*/