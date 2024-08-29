#include<iostream>
#include<list>
// List demonstrating in c++;
using namespace std;
void display(list<int> &li){
    list<int> :: iterator it;
    for(it=li.begin(); it!=li.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    list <int> list1; // list of 0 length;

    list1.push_back(4);
    list1.push_back(2);
    list1.push_back(7);
    list1.push_back(3);
    list1.push_back(6);
    list1.sort();
    display(list1);
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(3);
    // display(list1);

    list <int> list2(3); // Empty list of size 7;
    list<int> ::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    list2.sort();
    display(list2);
    cout<<"List after merging : "<<endl;
    list1.merge(list2); // Merge two list
    display(list1);

    // If i want to rewarse a list 
    cout<<"List after reverse : "<<endl;
    list1.reverse();
    display(list1);
    return 0;
}


/*
Methods of list : 
list1.end(); end of list.
list1.sort();
list1.merge(list2);
*/