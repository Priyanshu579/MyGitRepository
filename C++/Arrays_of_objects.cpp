#include<iostream>
using namespace std;
// Arrays of objects
class ShopItem{
    int id;
    float price;
    public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"Id of this item is : "<<id<<endl;
        cout<<"Price of this item is : "<<price<<endl;
    }
};

int main(){
    int size = 2;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *temptr = ptr;
    // General store
    // Veggies
    // Hardware
    int p;
    float q;
    for(int i=0; i<size; i++){
        cout<<"Enter your id and price : ";
        cin>>p>>q;
        // (*ptr + i).setData(p,q);
        (ptr)->setData(p,q);
        ptr++;
    }
    for(int i=0; i<size; i++){
        temptr->getData();
        temptr++;
    }
    return 0;
}
