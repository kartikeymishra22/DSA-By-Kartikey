#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void countDistinct(vector<int> nums){
    unordered_set<int> s;
    for(int i = 0; i<nums.size(); i++){
        s.insert(nums[i]);
    }
    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
}

int main(){
    vector<int> nums = {4,3,2,5,6,7,3,4,2,1};

    countDistinct(nums);

    return 0;
}
