#include<iostream>
#include<climits>
using namespace std;

void buySellStock(int arr[], int n){
    int temp[100];
    temp[0] = INT_MAX;
    for(int i = 1; i<n; i++){
        temp[i] = min(temp[i-1], arr[i-1]);
    }
    int maxProfit = 0;
    for(int i = 0; i<n; i++){
        int currProfit = (arr[i] - temp[i]);
        cout<<currProfit<<",";
        maxProfit = max(maxProfit, currProfit);
    }
    cout<<endl;
    cout<<"MaxProfit is -> "<<maxProfit<<endl;
}

int main(){
    int arr[] = {7,1,5,2,6,4};
    int n = sizeof(arr)/sizeof(int);

    buySellStock(arr,n);

    return 0;
}