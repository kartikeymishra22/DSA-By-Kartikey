#include<iostream>
using namespace std;

void sum(int *arr, int n){
    int leftSum[10] ={0};
    leftSum[0] = arr[0];
    for(int i = 1; i<n; i++){
        leftSum[i] = leftSum[i-1] + arr[i];
    }

    int rightSum[10] = {0};
    rightSum[n-1] = arr[n-1];
    for(int i = n - 2; i>= 0 ; i--){
        rightSum[i] = rightSum[i+1] + arr[i];
    }

    for(int i = 0; i<n ; i++){
        cout<<rightSum[i]<<",";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,7,3,6,5,6};
    int n = sizeof(arr) / sizeof(int);

    sum(arr, n);

    return 0;

}
