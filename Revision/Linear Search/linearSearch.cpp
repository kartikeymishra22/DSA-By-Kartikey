#include<iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]= {13,235,67,78548,84371,5,32156,543473};
    int n = sizeof(arr) / sizeof(int);
    int key = 32156;

    cout<<"Key is found -> "<<linearSearch(arr, n, key)<<endl;

    return 0;

}

