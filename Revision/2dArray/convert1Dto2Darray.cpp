#include<iostream>
#include<vector>
using namespace std;

void toPrint2DArray(int mat[2][3], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void convert1Dto2Darray(int *arr, int n){
    int mat[2][3];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<3; j++){
            mat[i][j] = arr[i * 3 + j];
        }
    }

    toPrint2DArray(mat, 2, 3);
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};

    convert1Dto2Darray(arr, 6);
    return 0;

}