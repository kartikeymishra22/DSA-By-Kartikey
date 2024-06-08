#include<iostream>
#include<string>
using namespace std;

string duplicates(string  str){
    string ans = "";
    for(int i = 0; i<str.length(); i++){
        bool duplicates = false;
        for(int j =0; j<ans.length(); j++){
            if(str[i] == ans[j]){
                duplicates = true;
                break;
            }
        }
        if(duplicates){
            return ans;
        }else{
            ans.push_back(str[i]);
        }
    }
    return ans;
}


int main(){
    string str = "apppnaacolllege";
    string res = duplicates(str);
    cout<<res<<endl;
}