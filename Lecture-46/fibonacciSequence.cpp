#include<iostream>
#include<vector>
using namespace std;

int fib(int x){
    if(x == 0 || x == 1){
        return x;
    }

    return fib(x-1) + fib(x-2);
}

int fibDP(int x, vector<int>& dp){
    if(x == 0 || x == 1){
        return x;
    }

    if(dp[x] != -1){
        return dp[x];
    }

    return dp[x] = fibDP(x-1, dp) + fibDP(x-2, dp);
    return dp[x];

    
}

int main(){
    int n = 6;
    vector<int> dp(n+1, -1);

    cout<<fib(n)<<endl;
}
