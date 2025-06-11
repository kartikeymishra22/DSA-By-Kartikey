#include<iostream>
#include<vector>
#include<climits> // For INT_MAX
using namespace std;

class SegmentTree{
    vector<int> tree;
    int n;

    void builtTree(vector<int> &arr, int st, int end, int node){
        if(st == end){
            tree[node] = arr[st];
            return;
        }

        int mid = st + (end - st) / 2;

        builtTree(arr, st, mid, 2* node + 1);
        builtTree(arr, mid + 1, end, 2 * node + 2);

        tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }

    int queryUtil(int qi, int qj, int si, int sj, int node){
        if(qj < si || sj< qi){
            return INT_MAX; // Return a value that won't affect the min query
        }
        else if(qi <= si && sj <= qj){
            return tree[node]; // Current segment is completely inside the query range
        } else 
        {
            int mid = si + (sj - si) / 2;
            int leftMin = queryUtil(qi, qj, si , mid, 2 * node + 1);
            int rightMin = queryUtil(qi, qj, mid + 1, sj, 2 * node + 2);
            return min(leftMin, rightMin); // Combine results from left and right children
        }
    }

    void updateUtil(int idx, int val, int st, int end, int node){
        if(st == end){
            tree[node] = val;
            return;
        }

        int mid = st + (end - st) / 2;

        if(idx <=mid && idx >= st){
            updateUtil(idx, val, st, mid, 2 * node + 1);
        } else {
            updateUtil(idx, val, mid + 1, end, 2 * node + 2);
        }

        tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }

    public:
    SegmentTree(vector<int> &arr){
        n = arr.size();
        tree.resize(4 *n);
        builtTree(arr, 0, n-1, 0);
    }

    void printTree(){
        for(int i = 0; i< tree.size(); i++){
            cout << tree[i] << " ";
        }
    }

    int queryRange(int qi, int qj){
        return queryUtil(qi, qj, 0, n-1, 0);
    }

    void updateVal(int idx, int val){
        updateUtil(idx, val, 0, n-1, 0);
    }

};

int main(){
    vector<int> arr = {6,8,-1,2,7,1,3,12,4};

    SegmentTree st(arr);
    // st.printTree();

    cout<<st.queryRange(0, 3) << endl; // Query the minimum in the range [0, 3]
    cout<<st.queryRange(2, 5) << endl; // Query the minimum in the range [2, 5]
    cout<<st.queryRange(3, 4) << endl; // Query the minimum in the range [3, 8]

    st.updateVal(4, -2); // Update index 2 to value 10
    st.printTree();

    return 0;

}