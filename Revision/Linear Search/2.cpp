#include<iostream>
using namespace std;

void linearSearch(int *arr, int n ,int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            cout<<i<<" ";
            i++;
        }
    }
    cout<<"Key not found"<<endl;
}

int main(){
    int arr[6] = {4,5,7,8,9,8};

    int key = 8;

    linearSearch(arr, 6, key);

}