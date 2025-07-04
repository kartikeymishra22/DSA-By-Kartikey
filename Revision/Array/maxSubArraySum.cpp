#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int *arr, int n){
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            int sum = 0;
            for(int k = i; k<=j; k++){
              sum  += arr[k]; 
            }
            cout<<sum<<",";
            maxSum = max(maxSum, sum);
        }
        cout<<endl;
    }
    return maxSum;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Maximum is -> "<<maxSubArraySum(arr,n)<<endl;

    return 0;
}