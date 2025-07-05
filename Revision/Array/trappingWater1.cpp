#include<iostream>
using namespace std;

void trappingWater(int arr[], int n){
    int leftMax[100];
    leftMax[0] = arr[0];

    for(int i = 1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], arr[i-1]);
    }

    int rightMax[100];
    rightMax[n-1] = arr[n-1];
    for(int i = n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], arr[i+1]);
    }

    int waterTrapp = 0;
    for(int i = 0; i<n; i++){
        int currTrap = min(leftMax[i], rightMax[i]) - arr[i];
        if(currTrap > 0){
            waterTrapp += currTrap;
        }
    }
    cout<<"Water Trapped is -> "<<waterTrapp<<endl;
}

int main(){
    int arr[] = {4,2,0,6,3,2,5};
    int n = sizeof(arr) / sizeof (int);

    trappingWater(arr, n);

    return 0;
}