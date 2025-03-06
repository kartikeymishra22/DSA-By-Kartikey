#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m["china"] = 150;
    m["india"] = 100;
    m["us"] = 50;

    for(auto it : m){
        cout<<it.first<<","<<it.second<<endl;
    }

    if(m.count("china")){
        cout<<"china is present"<<endl;
    }
    else{
        cout<<"china is not present"<<endl;
    }


    
}