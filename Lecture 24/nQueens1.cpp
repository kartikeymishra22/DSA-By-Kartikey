#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<char>> board, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"------------------------"<<endl;
}

void nQueens(vector<vector<char>> board, int row, int n){
    if(row ==n){
        print(board, n);
        return;
    }

    for(int j = 0; j<n; j++){
        board[row][j] = 'Q';
        nQueens(board, row+1, n);
        board[row][j] = '.';
    }
}

int main(){
    vector<vector<char>> board;
    int n ;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i =0; i<n; i++){
        vector<char> newRow;
        for(int j = 0; j<n; j++){
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    nQueens(board, 0, n);
}