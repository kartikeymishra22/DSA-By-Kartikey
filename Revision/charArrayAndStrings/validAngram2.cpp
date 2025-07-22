#include<iostream>
using namespace std;

void validAnagram(string s1, string s2){
    // if(s1.length() == s2.length()){
    //     cout<<"Not Valid Anagram"<<endl;
    //     return;
    // }

    int count[26] ={0};
    for(int i = 0; i<s1.length(); i++){
        int idx = s1[i] - 'a';
        count[idx]++;
    }
    for(int i = 0; i<s2.length(); i++){
        int idx = s2[i] - 'a';
        if(count[idx] == 0){
            cout<<"Not Valid Anagram"<<endl;
            return;
        }
        count[idx]--;
    }
    cout<<"Valid Anagram"<<endl;
}

int main(){
    string s1 = "car";
    string s2 = "cat";

    validAnagram(s1, s2);
    return 0;
}
