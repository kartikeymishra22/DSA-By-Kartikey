#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int arr[], int n){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i<n; i++){
        currSum = currSum + arr[i];
        cout<<currSum<<",";
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<endl ;
    return maxSum;
} 

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Maximum is -> "<<maxSubArraySum(arr,n)<<endl;

    return 0;
}