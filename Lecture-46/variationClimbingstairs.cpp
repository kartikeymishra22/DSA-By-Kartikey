#include<iostream>
#include<vector>
using namespace std;

int climbStairs(int n){
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    return dp[n];
} 
 // Time Complexity : O(N) ,

int climbStairsMem(int n,vector<int> &dp){
    if(n < 0){
        return 0;
    }
    if(n == 0|| n == 1){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] =  climbStairsMem(n-1, dp) + climbStairsMem(n-2, dp) + climbStairsMem(n - 3, dp);

    return dp[n];
}

int main(){
    int n;
    vector<int> dp(n+1, -1);
    cout<<"Enter the value of stairs : ";
    cin>>n;

    cout<<"number os ways : "<<climbStairs(n)<<endl;
    cout<<"number os ways : "<<climbStairsMem(n, dp)<<endl;



}