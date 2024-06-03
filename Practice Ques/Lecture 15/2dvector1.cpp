#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> mat;

    int row;
    cin>>row;

    int col;
    cin>>col;

    mat.resize(row, vector<int>(col));

    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cin>>mat[i][j];
        }
    }

     for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }


}