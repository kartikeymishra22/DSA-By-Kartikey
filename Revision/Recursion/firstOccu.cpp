#include<iostream>
using namespace std;

int fistOcuur(int arr[], int n, int key, int i){
    if(i == n){
        return -1;
    }

    if(arr[i] == key){
        return i;
    }

    return fistOcuur(arr, n, key, i+1);
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout << "Enter the key to search: ";
    cin >> key;


    int index = fistOcuur(arr, n, key, 0);
    if(index != -1){
        cout << "First occurrence of " << key << " is at index " << index << endl;
    } else {
        cout << key << " not found in the array." << endl;
    }


    return 0;
}