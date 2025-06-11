#include<iostream>
#include<vector>
using namespace std;

int catMem(int n, vector<int> &dp){
    if(n==0 || n==1){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int ans = 0;

    for(int i = 0; i<n; i++){
        ans += catMem(i, dp) * catMem(n-i-1, dp); 
    }

    return dp[n] = ans;

}

int main(){
    int n; 
    cout<<"Enter the nth number : ";
    cin>>n;

    vector<int> dp(n+1, -1);

    cout<<catMem(n, dp)<<endl;
}