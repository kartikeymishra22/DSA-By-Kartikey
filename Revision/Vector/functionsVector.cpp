#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,5,3,6,7,4,8};

    for(auto i = vec.begin(); i != vec.end() ;i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    if(vec.empty()){
        cout<<"Vector is empty"<<endl;
    }
    else{
        cout<<"Vector is not empty"<<endl;
    }

    return 0;

}