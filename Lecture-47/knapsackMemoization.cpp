#include<iostream>
#include<vector>
using namespace std;

int knapsackMem(vector<int> val, vector<int> wt, int W, int n, vector<vector<int>> &dp){
    if(W == 0 || n == 0){
        return 0;
    }

    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(dp[n][W] != -1){
        return dp[n][W];
    }

    if(itemWt <= W){
        //include the item

        int ans1 = knapsackMem(val, wt, W-itemWt, n-1, dp) + itemVal; // include the item

        //exclude the item
        int ans2 = knapsackMem(val, wt, W, n-1, dp); // exclude the item

        dp[n][W] = max(ans1, ans2); // return the maximum of both cases
    }

    else{
        // exclude the item
         dp[n][W] = knapsackMem(val, wt, W, n-1, dp); // exclude the item
    }

    return dp[n][W]; // return the maximum of both cases
}

int main(){
    vector<int> val = {15,14,10,45,30};
    vector<int> wt = {2,5,1,3,4};
    int W = 7;
    int n = val.size();

    vector<vector<int>> dp(n+1, vector<int>(W+1, -1)); // Initialize dp array with -1

    cout<<"maximum value in knapsack = "<<knapsackMem(val, wt, W, n, dp)<<endl;

    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=W; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;


}