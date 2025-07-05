#include<iostream>
using namespace std;

int leftOccu(int arr[], int n, int target){
    int st = 0; 
    int end = n -1;
    int idx = -1;
    while(st<=end){
        int mid = st + (end - st) / 2;
        if(arr[mid] == target){
            end = mid -1;
            idx = mid;
        }
        else  {
            st = mid + 1;
        }
    }
    return idx;
}

int main(){
    int arr[] = {1,2,3,3,3,3,4,6};
    int n = sizeof(arr)/sizeof(int);

    int target;
    cout<<"Enter the target : ";
    cin>>target;


    cout<<"Left occurance is -> "<<leftOccu(arr, n, target)<<endl;
    return 0;
}