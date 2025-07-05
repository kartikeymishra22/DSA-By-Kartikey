#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int st = 0;
    int end = n - 1;
   

    while(st<=end){
        int mid = st + (end - st)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            st = mid+1;
        }
        else{
            end = mid - 1;
        }
        
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(int);

    int target;
    cout<<"Enter the target -> ";
    cin>>target;

    cout<<"Key found at index -> "<<binarySearch(arr, n, target)<<endl;
    return 0;


}