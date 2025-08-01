#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1(10, -1);

    vec1.push_back(1);

    cout<<vec1.size()<<endl;
    cout<<vec1.capacity()<<endl;

    for(auto x : vec1){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}