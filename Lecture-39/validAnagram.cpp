#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int validAnagram(string s, string t){
    if(s.size() != t.size()){
        cout<<"Not valid Anagram"<<endl;
        return 0;
    }
    unordered_map<char, int> m;
    for(int i =0; i<s.size(); i++){
        if(m.count(s[i])){
            m[s[i]]++;
        }
        else{
            m[s[i]] = 1;
        }
    }
    for(int i = 0; i<t.size(); i++){
        if(m.count(t[i])){
            m[t[i]]--;
            if(m[t[i]] == 0){
                m.erase(t[i]);
            }
        }
        else{
            // cout<<"Not valid Anagram"<<endl;
            return 0;
        }
    }

    if(m.size() == 0){
        cout<<"Valid Anagram"<<endl;
        return 1;
    }
    else{
        cout<<"Not valid Anagram"<<endl;
        return 0;
    }
}

int main(){
    string s = "race";
    string t = "care";

    validAnagram(s,t);

    return 0;
}