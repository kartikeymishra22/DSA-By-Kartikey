#include<iostream>
#include<string>
using namespace std;

void validAnagram(string &str1, string &str2){
    if(str1.length() != str2.length()){
        cout << "Not an anagram" << endl;
        return;
    }

    string str3 = "";
    for(int i = 0; i<str1.length(); i++){
        for(int j = 0; j<str2.length(); j++){
            if(str1[i] == str2[j]){
                str3.push_back(str1[i]);
                str2.erase(j, 1);
                break; // Break to avoid checking the same character again
            }
        }
    }
    cout << "Characters in str1 that are also in str2: " << str3 << endl;
   if(str3.length() != str1.length()){
        cout << "Not an anagram" << endl;
        return;
    }
    for(int i = 0; i<str3.length(); i++){
        if(str3[i] != str1[i]){
            cout << "Not an anagram" << endl;
            return;
        }
    }
    cout << "Anagram" << endl;
}

int main(){
    string str1 = "heart";
    string str2 = "earth";

    validAnagram(str1, str2);
    return 0;

}