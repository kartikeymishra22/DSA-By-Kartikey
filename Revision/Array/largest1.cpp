#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {55,546,4356,2567,56345,1,3,456,5};
    int n = sizeof(arr)/sizeof(int);

    int max = INT_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }

    cout<<"Maximum is -> "<<max<<endl;

    return 0;
}