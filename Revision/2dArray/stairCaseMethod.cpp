#include<iostream>
using namespace std;

void stairCaseMethod(int matrix[][4], int rows, int cols, int target){
    int i = 0, j = cols -1;
  
    while(i<rows &&j>=0){
        if(matrix[i][j] == target){
            cout << "Element found at: " << i << ", " << j << endl;
            return;
        }
        else if(matrix[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    cout << "Element not found" << endl;
    return;
}

void stairCaseMethod1(int matrix[][4], int rows, int cols, int target){
    int i = rows - 1, j = 0;
    while(i>=0 && j<cols){
        int element = matrix[i][j];
        if(element == target){
            cout << "Element found at: " << i << ", " << j << endl;
            return;
        }
        else if(element > target){
            i--;
        }
        else{
            j++;
        }
    }
    cout << "Element not found" << endl;
    return;
}

int main(){
    int matrix[4][4] = {{10,20,30,40},
                       {15,25,35,45},
                       {27,29,37,48},
                       {32,33,39,50}};

    int target = 50;
    stairCaseMethod1(matrix, 4, 4, target);
    return 0;

}