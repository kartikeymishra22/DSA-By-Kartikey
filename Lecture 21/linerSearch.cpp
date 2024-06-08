#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i =0; i<n; i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[7] = { 4,5,6,7,0,1,2};
    int n = 7;

    int res = linearSearch(arr,n,2);
    cout<<"Idx : "<<res<<endl;

}