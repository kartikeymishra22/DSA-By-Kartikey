#include<iostream>
#include<climits>
using namespace std;

void toPrint(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void countSort(int *arr, int n){
    int minRange = INT_MAX;
    int maxRange = INT_MIN;
    for(int i = 0; i<n; i++){
        minRange = min(minRange, arr[i]);
        maxRange = max(maxRange, arr[i]);
    }

    // cout<<minRange<<endl;
    // cout<<maxRange<<endl;

    int freq[11] = {0};
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
    }

    for(int i = maxRange, j = 0; i>=minRange; i--){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    toPrint(arr, n);
}

int main(){
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);

    countSort(arr, n);
    return 0;
}