#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int mcmMem(vector<int> arr, int i, int j, vector<vector<int>>& dp){
    if(i ==j){
        return 0;
    }

    int ans = INT_MAX;

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    for(int k = i; k<j; k++){
        int cost1 = mcmMem(arr, i, k, dp);
        int cost2 = mcmMem(arr, k+1, j, dp);

        int currCost = cost1 + cost2 + (arr[i-1] * arr[k] * arr[j]);

        ans = min(ans, currCost);

        dp[i][j] = ans;
    }

    return dp[i][j];
}

int main(){
    vector<int> arr = {1,2,3,4,3};
    int n = arr.size();

    vector<vector<int>> dp(n, vector<int>(n, -1));

    cout << "Minimum number of multiplications is: " << mcmMem(arr, 1, n-1, dp) << endl;

    return 0;
}