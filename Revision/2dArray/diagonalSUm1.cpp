#include<iostream>
using namespace std;

void diagonalSum(int arr[][3], int n){
    int sum = 0;

    for(int i = 0; i<n; i++){
        sum += arr[i][i]; // Primary diagonal
        if(i != n - i - 1) // Avoid double counting the center element in odd-sized matrices
           sum += arr[i][n - i - 1]; // Secondary diagonal
    }

    cout << "Diagonal Sum: " << sum << endl;
}

int main(){
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };


    diagonalSum(mat, 3);
    return 0;

}