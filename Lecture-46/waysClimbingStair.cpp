#include<iostream>
#include<vector>
#include<string>
using namespace std;

void ways(int n , string ans){
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        ans = to_string(dp[i]) + " ";
    }

    cout<<ans<<endl;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    string ans = "";

    ways(n, ans);

    return 0;


}