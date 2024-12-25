#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i]== key){
            return i;
        }
    }
    return -1;
}

int main(){
    const int n = 5;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int key = 5;

    cout<<"Index of the element is: "<<linearSearch(arr, n, key)<<endl;

    return 0;
}