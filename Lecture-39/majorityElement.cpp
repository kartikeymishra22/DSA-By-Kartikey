#include<iostream>
#include<unordered_map>
using namespace std;

void majorityElement(int *arr, int n){
    unordered_map<int , int> m;
    for(int i = 0; i<n; i++){
        if(m.count(arr[i])){
            m[arr[i]]++;
        }else{
            m[arr[i]] = 1;
        }
    }

    for(pair<int, int> pair: m){
        if(pair.second > n/3){
            cout<<pair.first<<endl;
        }
    }
}

int main(){
    int arr[9] = {1,3,2,5,1,3,1,5,1};
    int n = 9;

    majorityElement(arr,n);

    return 0;

}