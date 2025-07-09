#include<iostream>
using namespace std;

void toPrint(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void countSort(int *arr, int n){
    int freq[8] ={0};
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
    }
    for(int i = 0, j = 0; i<8; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    toPrint(arr, n);
}

int main(){
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof (int);

    countSort(arr, n);

    return 0;
}