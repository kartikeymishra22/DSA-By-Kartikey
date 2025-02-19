#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int, string> m;

    m[101] = "Rahul";
    m[122] = "Samay";
    m[123] = "Kartikey";

    cout<<m[122]<<endl;

    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;


}