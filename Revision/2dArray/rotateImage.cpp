#include<iostream>
using namespace std;

void toPrint(int arr[][3], int row, int col){
    for(int j = 0; j<col; j++){
        for(int i = row-1; i>=0; i--){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    toPrint(arr, 3, 3);
    return 0;
}