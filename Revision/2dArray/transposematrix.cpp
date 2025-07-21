#include<iostream>
#include<vector>
using namespace std;

void toPrint(int arr[][2], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int arr[][3], int row, int col){
    int transpose[3][2]; // Adjust size based on the input matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            transpose[j][i] = arr[i][j];
        }
    }

    toPrint(transpose, 3, 2);
}

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    transposeMatrix(arr, 2, 3);
    return 0;

}