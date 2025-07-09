#include<iostream>
using namespace std;

void count(int arr[], int n){
    int count[10] = {0};
    for (int i = 0; i < n; i++) {
    count[arr[i]]++;
}

    for(int i = 0; i<n; i++){
        cout<<count[i]<<",";
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,2,3,3};
    int n = sizeof(arr)/ sizeof(int);

    count(arr, n);

    return 0;
}