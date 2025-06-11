#include<iostream>
#include<vector>
using namespace std;

int getMinDiff(vector<int> arr){
    int totalSum = 0;
    for(int el : arr){
        totalSum += el;
    }

    int n = arr.size();
    int W = totalSum / 2;
    vector<vector<int>> dp(n+1, vector<int>(W+1, 0));

    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<W+1; j++){
            if(arr[i-1]<= j){
                dp[i][j] = max(dp[i-1][j], arr[i-1] + dp[i-1][j-arr[i-1]]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    int grp1sum = dp[n][W];
    int grp2sum = totalSum - grp1sum;
    return abs(grp1sum - grp2sum);
}

int main(){
    vector<int> arr = { 1,6,11,5};

    cout << "Minimum difference between two subsets: " << getMinDiff(arr) << endl;


}