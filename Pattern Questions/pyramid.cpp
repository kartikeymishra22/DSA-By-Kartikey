#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;

    for(int row = 1; row<=n; row++){
        for(int space = 1; space <=n-row; space++){
            cout<<"*";
        }
        cout<<endl;
    }
}