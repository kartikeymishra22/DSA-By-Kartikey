#include<iostream>
#include<vector>
using namespace std;

int knapsackTab(vector<int> val, vector<int> wt, int W, int n){
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0)); // Initialize dp array with 0

    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<W+1; j++){
            int itemWt = wt[i-1];
            int itemVal = val[i-1];

            if(itemWt <= j){
                dp[i][j] = max(dp[i-1][j-itemWt] + itemVal, dp[i-1][j]); // include the item
            }
            else{
                dp[i][j] = dp[i-1][j]; // exclude the item
            }
        }
    }

    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<W+1; j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return dp[n][W]; // return the maximum value in the knapsack

   
}

int main(){
    vector<int> val = {15,14,10,45,30};
    vector<int> wt = {2,5,1,3,4};
    int W = 7;
    int n = val.size();

    cout<<"maximum value in knapsack = "<<knapsackTab(val, wt, W, n)<<endl;

    return 0;

}