#include<iostream>
using namespace std;

void sortedArr(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        if(arr[i] >  arr[i+1]){
            cout<<"Array is not sorted"<<endl;
            return;
        }
    }
    cout<<"Array is sorted"<<endl;
}

bool sortedArrRec(int *arr, int n, int idx){
    if(idx == n-1){
        return true;
    }

    if(arr[idx] > arr[idx+1]){
        return false;
    }

    return sortedArrRec(arr, n, idx+1);
}   

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    // sortedArr(arr, 5);

    if(sortedArrRec(arr, 5, 0)){
        cout<<"Array is sorted"<<endl;
    } else {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;



}