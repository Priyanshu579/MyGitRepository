#include<iostream>
// Map 
#include<map>
#include<string>
using namespace std;
int main(){
    map<string, int> marksMap;
    marksMap["Priyanshu"] = 98;
    marksMap["Ritika"] = 89;
    marksMap["Sharuya"] = 69;
    marksMap.insert({{"Satguru",100},{"Rajpita Ji",100}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    return 0;
}