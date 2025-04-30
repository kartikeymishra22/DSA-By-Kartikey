#include<iostream>
#include<vector>
using namespace std;

int climbingRec(int n){
    if(n == 0 || n == 1){
        return 1;
    }

    return climbingRec(n-1)+ climbingRec(n - 2); 
}

int climbMem(int n, vector<int> &dp){
    if(n == 0 || n == 1){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = climbMem(n-1, dp) + climbMem(n-2, dp);
}

int climbTab(int n){
    vector<int> dp(n+1, 0);

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;

    vector<int> dp(n+1, -1);

    // cout<<climbingRec(n)<<endl;

    cout<<climbMem(n, dp)<<endl;

    return 0;
}
