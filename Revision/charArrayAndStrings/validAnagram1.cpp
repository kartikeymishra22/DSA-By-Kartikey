#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void validAnagram(string s, string t){
    if(s.length() != t.length()) {
        cout << "Not Valid anagram" << endl;
        return;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s.compare(t) == 0) {
        cout << "Valid anagram" << endl;
    } else {
        cout << "Not Valid anagram" << endl;
    }
}

int main(){
    string s = "anagram";
    string t = "nagaram";

    validAnagram(s, t);
    return 0;

}