#include<iostream>
#include<string>
using namespace std;

int lsc(string str1, string str2){
    if(str1.length() == 0 || str2.length() == 0){
        return 0;
    }

    if(str1[0] == str2[0]){
        return 1 + lsc(str1.substr(1), str2.substr(1));
    } 
    else{
        return 0;
    }
}

int main(){
    string str1 = "abcde";
    string str2 = "bcde";

    cout << "Length of LCS is " << lsc(str1, str2) << endl;

}