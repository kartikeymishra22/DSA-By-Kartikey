#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int st = 0;
    int end = n - 1;

    while(st<=end){
        int mid = st + (end - st) / 2;  
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]< key){
            end = mid -1;
        }
        else{
            st = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,4,6,7,8,9};
    int n = sizeof(arr)/ sizeof(int);
    int key =6;

    cout<<binarySearch(arr, n, key)<<endl;

    return 0;

}