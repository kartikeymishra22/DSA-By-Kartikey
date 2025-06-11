#include<iostream>
#include<vector>
using namespace std;

class SegmentTree{
    vector<int> tree;
    int n;

    void builtTree(vector<int> &arr, int st, int end, int node){
        if(st == end){
            tree[node] = arr[st];
            return ;
        }

        int mid = st + (end - st) / 2;

        builtTree(arr, st, mid, 2*node + 1);
        builtTree(arr, mid + 1, end, 2*node + 2);

        tree[node] = tree[2*node + 1] + tree[2*node + 2];
    }

    int rangeSum(int qi, int qj, int si, int sj, int node){
        if(qj <si || qi > sj){
            return 0; // No overlap
        }

        else if(qi <= si && qj >= sj){
            return tree[node]; // Total overlap
        }

        else{
            int mid = si + (sj - si) / 2;

            return rangeSum(qi, qj, si, mid, 2*node + 1) + 
                   rangeSum(qi, qj, mid + 1, sj, 2*node + 2); // Partial overlap
        }
    }


public:
    SegmentTree(vector<int> &arr){
        n = arr.size();
        tree.resize(4*n);
        builtTree(arr, 0, n-1, 0);
    }

    
    void printTree(){
        for(int i = 0; i<tree.size(); i++){
            cout<<tree[i]<<" ";
        }
        cout<<endl;
    }

    int querySum(int qi, int qj){
        return rangeSum(qi, qj, 0, n-1, 0);
    }
};

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8};

    SegmentTree st(arr);
    
    cout<< st.querySum(0, 3) << endl; // Query sum from index 0 to 3
    cout<< st.querySum(2, 5) << endl; // Query sum from index 2 to 5
    cout<< st.querySum(1, 6) << endl; // Query sum from index 1 to 6

    return 0;
}