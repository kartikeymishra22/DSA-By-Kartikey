#include<iostream>
using namespace std;

int main(){
    int arr[5] = {55,88,99,23,45};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];

    for(int i = 1; i<n; i++){
        if(arr[0] < arr[i]){
            max  = arr[i];
        }
    }

    cout<<"Maximum is -> "<<max<<endl;

    return  0;
}
