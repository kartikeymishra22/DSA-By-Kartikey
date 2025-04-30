#include<iostream>
#include<vector>
#include<string>
using namespace std;

void staircase(int n , string path){
    if(n<0){
        return;
    }
    
    if(n==0){
        cout<<path<<endl;
        return;
    }

    staircase(n-1 , path + "1");
    staircase(n-2 , path + "2");
}

int main(){
    int n ;
    cin>>n;

    string path = "";

    staircase(n, path);

    return 0;
}