#include<iostream>
using namespace std;

int lastOcc(int *arr, int n , int target){
    int st = 0;
    int end = n-1;

    int idx = -1;

    while(st<=end){
        int mid = st + (end-st)/2;

        if(arr[mid] == target){
            st = mid+1;
            idx = mid;
        }
        else if(arr[mid] < target){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return idx;
}

int main(){
    int arr[] = {1,2,3,3,3,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"Enter the target : ";
    cin>>target;

    cout<<"Last occurance is -> "<<lastOcc(arr, n, target)<<endl;

    return 0;
}