#include<iostream>
#include<vector>
#include<string>
using namespace std;

int lccsMem(string str1, string str2, int n, int m, vector<vector<int>>& dp) {
    if (n == 0 || m == 0) {
        return 0;
    }

    if(dp[n][m] != -1) {
        return dp[n][m];
    }

    if(str1[n-1] == str2[m-1]){
        dp[n][m] = 1 + lccsMem(str1, str2, n-1, m-1, dp);
    }
    else{
        dp[n][m] = max(lccsMem(str1, str2, n-1, m, dp), lccsMem(str1, str2, n, m-1, dp));
    }

    return dp[n][m];
}

int main(){
    string str1 = "abcdge";
    string str2 = "abedg";

    int n = str1.length();
    int m = str2.length();

    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));

    cout<<"Length of LCS is: " << lccsMem(str1, str2, n, m, dp) << endl;

    for(int i = 0; i < n+1; i++){
       for(int j = 0; j < m+1; j++){
            cout<< dp[i][j] << " ";
         }
        cout<<endl;
     }

    return 0;
}