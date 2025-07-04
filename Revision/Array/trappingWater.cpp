#include<iostream>
#include<climits>
using namespace std;

void trappingWater(int arr[], int n){
    int leftMax[100];
    leftMax[0] = arr[0];
    int rightMax[100];
    rightMax[n-1] = arr[n-1];
    for(int i = 1; i<n; i++){
        leftMax[i] = max(leftMax[i-1], arr[i-1]);
    }
    for(int i = n-2; i>=0; i--){
        rightMax[i] = max(rightMax[i+1], arr[i+1]);
    }
    // int minHeight[100];
    // for(int i = 0; i<n; i++){
    //     minHeight[i] = min(leftMax[i], rightMax[i]);
    // }
    int waterTrap = 0;
    for(int i = 0; i<n; i++){
        int trap = min(leftMax[i], rightMax[i]) - arr[i];
        if(trap > 0){
            waterTrap += trap;
        }
    }
    cout<<waterTrap<<endl;
}

int main(){
    int height[]  = {4,2,0,6,3,2,5};
    int n = sizeof (height)/ sizeof (int);

    trappingWater(height, n);

    return 0;
}