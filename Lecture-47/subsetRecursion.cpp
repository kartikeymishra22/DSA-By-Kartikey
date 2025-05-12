#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subsetRecursion(vector<int> nums, int target, int n, string ans){
    if( target == 0){
        cout<<ans<<endl;
        return;
    }
    if(n==0|| target < 0){
        return;
    }
    int itemVal = nums[n-1];

    
    subsetRecursion(nums, target - itemVal, n - 1, ans + to_string(itemVal) + " ");
    
    subsetRecursion(nums, target, n-1, ans);
    
}

int main(){
    vector<int> nums = {4,2,7,1,3};
    int target = 7;

    int n = nums.size();
    string ans = "";

    subsetRecursion(nums, target, n, ans);
}