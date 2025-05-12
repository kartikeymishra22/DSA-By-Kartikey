#include<iostream>
#include<vector>
using namespace std;

// Function to check if a subset with the given sum exists

bool isSubset(vector<int> nums , int target, int n){
    vector<vector<int>> dp(n+1, vector<int>(target+1, 0));

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=target; j++){
            if(nums[i-1] <= j){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-nums[i-1]] + nums[i-1]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    for(int i = 0; i<= n; i++){
        for(int j = 0; j<=target; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][target] == target; // Check if the maximum sum equals the target

}  

int main(){
    vector<int> nums = {4,2,7,1,3};
    int target = 7;
    int n = nums.size();

    cout<<isSubset(nums, target, n)<<endl; // Output: 1 (true)
}