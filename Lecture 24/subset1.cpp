#include<iostream>
#include<string>
using namespace std;

void printsubset(string str, string subset){
    if(str.length() == 0){
        cout<<subset<<endl;
        return;
    }

    char ch = str[0];
    printsubset(str.substr(1,str.size()-1), subset + ch);
    printsubset(str.substr(1,str.size()-1), subset);
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;

    string subset = "";

    printsubset(str, subset);
}