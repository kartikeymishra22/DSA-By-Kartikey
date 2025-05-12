#include<iostream>
#include<vector>
using namespace std;

int lisTab(vector<int> arr){
    int n = arr.size();

    vector<vector<int>> dp(n, vector<int>(n, 0));

    int ans = 0;

    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<n+1; j++){
            if(arr[i-1]> arr[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = 0;
            }
            ans = max(ans, dp[i][j]);
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return ans;
}

int main(){
    vector<int> arr = {50,3,10,7,40,80};

    cout << "Length of Longest Increasing Subsequence is " << lisTab(arr) << endl;
    
}

