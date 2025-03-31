#include<iostream>
#include<vector>
#include<string>
using namespace std;

void staircase(int n, string path){
    if(n== 0){
        cout<<path<<endl;
        return ;
    }
    if(n==1){
        cout<<path+ "1"<<endl;
        return ;
    }

    staircase(n-1, path+ "1");
    staircase(n-2, path + "2");
}

int main(){

    int n;
    cout<<"Enter the number of stairs : ";
    cin>>n;

    
    staircase(n,"");

    return 0;
}