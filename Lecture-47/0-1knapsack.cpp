#include<iostream>
#include<vector>
using namespace std;

int knapSackRec(vector<int> val, vector<int> wt, int W, int n){
    if(n == 0 || W == 0){
        return 0;
    }

    int itemWt = wt[n-1];
    int itemVal= val[n-1];

    if(itemWt <= W){
        // include
        int ans1 = knapSackRec(val, wt, W-itemWt,n-1) + itemVal;

        // exclude
        int ans = knapSackRec(val,wt,W, n-1);

        return max(ans1, ans);
    }
    else{
        return knapSackRec(val, wt, W,n-1);
    }
}

int main(){
    vector<int> val = {15,14,10,45,30};
    vector<int> wt = {2,5,1,3,4};
    int n = 5;
    int W = 7;

    cout<<"Maximum profit is : "<<knapSackRec(val,wt, W,n)<<endl;
    return 0;
}