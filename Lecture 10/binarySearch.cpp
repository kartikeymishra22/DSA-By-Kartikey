#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int st = 0;
    int end = n-1;
    int mid = st + (end -st)/2;

    while(st<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = st + (end - st)/2;
    }
    return -1;
}

int main(){
    int arr[] ={2,4,6,7,8,10,12,14,16};

    int n = sizeof(arr) / sizeof(int);

    int result = binarySearch(arr, n , 10);
    cout<<result<<endl;


}