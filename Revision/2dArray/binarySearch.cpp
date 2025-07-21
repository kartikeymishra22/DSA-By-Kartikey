#include<iostream>
using namespace std;

bool binarySearch(int arr[][4], int target, int rows, int cols) {
    for(int col = 0; col< cols; col++){
        int st = 0; 
        int end = rows - 1;

        while(st<=end){
            int mid = st + (end - st) / 2;
            int element = arr[mid][col];
            if(element == target){
                return true;
            }
            else if(element < target){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return false;
}

int main(){
    int arr[3][4] = {{1,3,5,7},
                   {10,11,16,20},
                   {23,30,34,60}};

     
    cout<<binarySearch(arr, 3, 4, 3)<<endl; // Output: 1 (true)
    return 0;
}