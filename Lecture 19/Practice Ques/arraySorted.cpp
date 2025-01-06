#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
    if(n == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return isSorted(arr+1, n-1);
}

// bool isSorted(int *arr, int n){
//     for(int i = 0; i<n-1; i++){
//         if(arr[i] > arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    if(isSorted(arr, n)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}