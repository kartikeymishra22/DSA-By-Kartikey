#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter the row : ";
    cin>>row;

    int col;
    cout<<"Enetr the col : ";
    cin>>col;

    int **matrix = new int *[row];
    for(int i = 0; i<row; i++){
        matrix[i] = new int [col];
    }

    for(int i = 0; i<row; i++){
        for(int j =0; j<col;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i = 0; i<row; i++){
        for(int j =0; j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }



}