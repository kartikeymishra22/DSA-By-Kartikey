#include<iostream>
#include<vector>
using namespace std;

void countFreq(vector<int> vec){
    int n = vec.size();
    vector<int> freq(n, 0);

    for(int i = 1
        ; i<vec.size(); i++){
        freq[vec[i]]++;
    }

    for(int it : freq){
        cout<<it<<" ";
    }
}

int main(){
    vector<int> vec = {1,2,2,2,3,3,4,4,4};

    countFreq(vec);
    return 0;
}