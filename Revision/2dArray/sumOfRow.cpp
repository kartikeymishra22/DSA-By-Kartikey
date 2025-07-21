#include<iostream>
using namespace std;

int sumofRow(int arr[][3], int row, int col){
    int sum = 0;
    for(int i = 0; i<col; i++){
        sum += arr[1][i];
    }
    return sum;

}

int main(){
    int arr[3][3] = {{1,2,9},{11,4,3},{2,2,3}};
    cout << "Sum of row 1: " << sumofRow(arr, 3, 3) << endl;
    return 0;
}