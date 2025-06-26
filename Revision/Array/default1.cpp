#include<iostream>
using namespace std;

void toPrint(int arr[], int n, int start=0){
    for(int i = start; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]); // Calculate the size of the array

    toPrint(arr, n, 5);

    return 0;
}