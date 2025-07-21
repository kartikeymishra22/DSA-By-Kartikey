#include<iostream>
using namespace std;

int countOfNum(int arr[][3], int row, int col, int num){
    int count = 0;
    for(int i = 0 ; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j] == num){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[2][3] = {{4,7,8},
                     {8,8,7}};
    
    int num = 8;

    cout << "Count of " << num << " is: " << countOfNum(arr, 2, 3, num) << endl;
    return 0;
}