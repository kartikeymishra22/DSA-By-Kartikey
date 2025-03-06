#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);

    cout<<s.size()<<endl;

    if(s.find(10) != s.end()){
        cout<<"10 is present"<<endl;
    }
    else{
        cout<<"10 is not present"<<endl;
    }

    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
    
    
}
