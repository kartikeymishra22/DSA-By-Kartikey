#include<iostream>
#include<vector>
using namespace std;

int coinChange(vector<int> coins, int amount, int n){
    vector<vector<int>> dp(n+1, vector<int>(amount+1, 0));
    for(int i = 0; i<n+1; i++){
        dp[i][0] = 1; // 0 amount can be made with 0 coins;
    }

    for(int i = 1; i<n+1; i++){
        for(int j =1; j<amount+1; j++){
            if(coins[i-1] <= j){
                dp[i][j] = dp[i][j-coins[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=amount; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][amount];
}

int main(){
    vector<int> nums = {1, 2, 5};
    int amount = 5;
    int n = nums.size();
    
    cout<<"Possible combinations: "<<coinChange(nums, amount, n)<<endl;

}