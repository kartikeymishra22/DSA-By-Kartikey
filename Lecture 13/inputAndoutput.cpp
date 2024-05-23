#include<iostream>
using namespace std;

int main(){
    int students[3][4];
    for(int i = 0;i<3;i++){
        for(int j=0; j<4;j++){
            cin>>students[i][j];
        }
    }

    for(int i = 0;i<3;i++){
        for(int j=0; j<4;j++){
            cout<<students[i][j]<<" ";
        }
        cout<<endl;
    }
}