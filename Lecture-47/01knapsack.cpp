#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int knapsack(vector<int> val, vector<int> wt, int w, int n){
    if(w==0 || n==0){
        return 0;
    }

    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(itemWt <= w){
        // include
        int ans1 = knapsack(val, wt, w-itemWt, n-1) + itemVal;

        // exclude

        int ans2 = knapsack(val, wt, w, n-1);

        return max(ans1, ans2);
    }

    else{
        return knapsack(val, wt, w, n-1);
    }
}

int knapsackMem(vector<int> val, vector<int> wt, int w, int n, vector<vector<int>> &dp){
    if(w==0 || n==0){
        return 0;
    }

    if(dp[n][w] != -1){
        return dp[n][w];
    }


    int itemWt = wt[n-1];
    int itemVal = val[n-1];

    if(itemWt <= w){
        // include
        int ans1 = knapsackMem(val, wt, w-itemWt, n-1, dp) + itemVal;

        // exclude

        int ans2 = knapsackMem(val, wt, w, n-1, dp);

        dp[n][w] =  max(ans1, ans2);
    }

    else{
        dp[n][w] = knapsackMem(val, wt, w, n-1, dp);
    }

    return dp[n][w];
}

int main(){
    vector<int> val = {15,14,10,45,40};
    vector<int> wt = {2,5,1,3,4};
    int n = 5;
    int w = 7;

    vector<vector<int>> dp(n+1, vector<int> (w+1, -1));


    // cout<<"Maximum profit is : "<<knapsack(val, wt, w, n)<<endl;

    cout<<"Maximum profit is : "<<knapsackMem(val, wt, w, n, dp)<<endl;

}