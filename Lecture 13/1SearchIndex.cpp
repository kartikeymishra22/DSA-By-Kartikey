#include<iostream>
using namespace std;

bool searchIndex(int arr[][4], int n, int m, int key){
    int i = 0, j = m-1;

    while(i<n && j>=0){
        if(arr[i][j] == key){
            cout<<"Found at cell ("<<i<<","<<j<<")"<<endl;
            return true;
        } else if(arr[i][j] > key){
            j--;
        } else{ 
            i++;
        }
    }
    cout<<"Key not found"<<endl;
    return false;
}

int main(){
    int arr[4][4] = {{10,20,30,40},{15,25,35,45},{27,29,37,49},{32,33,39,56}};

    searchIndex(arr, 4,4, 39);
}