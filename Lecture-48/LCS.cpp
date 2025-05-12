#include<iostream>
#include<string>
using namespace std;

int lcs(string str1, string str2){
    int ans = 0;

    for(int i = 0; i< str1.length(); i++){
        for(int j = 0; j<str2.length(); j++){
            if(str1[i] == str2[j]){
                ans++;
                break; // Move to the next character in str1
            }
        }
    }
    return ans;
}

int lcsRec(string str1, string str2){
    if(str1.length() == 0 || str2.length() == 0){
        return 0;
    }

    int n = str1.length();
    int m = str2.length();

    if(str1[n-1] == str2[m-1]){
        return 1 + lcsRec(str1.substr(0, n-1), str2.substr(0, m-1));
    }
    else{
        int ans1 = lcsRec(str1.substr(0, n-1), str2);
        int ans2 = lcsRec(str1, str2.substr(0, m-1));
        return max(ans1, ans2);
    }
}


int main(){
    string str1 = "abcdge";
    string str2 = "abedg";

    cout << "Length of LCS is " << lcsRec(str1, str2) << endl;

    return 0;
}