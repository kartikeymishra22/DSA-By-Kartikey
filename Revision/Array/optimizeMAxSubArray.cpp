#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int *arr, int n){
    int maxSum = INT_MIN;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j = i; j<n; j++){
            sum += arr[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Maximum is -> "<<maxSubArraySum(arr,n)<<endl;

    return 0;
}