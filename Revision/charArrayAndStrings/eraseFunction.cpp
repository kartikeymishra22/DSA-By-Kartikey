#include<iostream>
#include<string>
using namespace std;

void eraseFunction(string &s){
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'K' || s[i] == 'k'){
           s.erase(i,1);
        }
    }

    cout << "String after erase: " << s << endl;
}

int main(){
    string s = "Kartikey";

    string s1 = "Kartikey";

    if(s == s1){
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    // cout << "Original string: " << s << endl;
    // eraseFunction(s);
    return 0;

}