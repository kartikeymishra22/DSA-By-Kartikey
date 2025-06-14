#include<iostream>
#include<vector>
#include<climits> // For INT_MAX
using namespace std;

class SegmentTree {
    vector<int> tree;
    int n;

    void builtTree(vector<int> &arr, int st, int end, int node){
        if(st == end){
            tree[node] = arr[st];
            return;
        }

        int mid = st + (end - st) / 2;

        builtTree(arr, st, mid, 2 * node + 1);
        builtTree(arr, mid + 1, end, 2 * node + 2);

        tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }

    int queryMinUtil(int qi, int qj, int si, int sj, int node){
        if(qj < si|| sj < qi){
            return INT_MAX; // Return a value that won't affect the min query
        }

        else if(qi <= si && sj <= qj){
            return tree[node];
        }

        else{
            int mid = si + (sj - si) / 2;
            int leftMin = queryMinUtil(qi, qj, si, mid, 2 * node + 1);
            int rightMin = queryMinUtil(qi, qj, mid + 1, sj, 2 * node + 2);
            return min(leftMin, rightMin);
        }
    }

    void updateMinUtil(int idx, int newVal, int st, int end, int node){
        if(st == end){
            tree[node] = newVal;
            return;
        }

        int mid = st + (end - st)/2;

        if(idx<= mid){
            updateMinUtil(idx, newVal, st, mid, 2* node + 1);
        }
        else{
            updateMinUtil(idx, newVal, mid+1, end, 2*node + 2);
        }

        tree[node] = min(tree[2 * node + 1], tree[2 * node + 2]);
    }

    public: 
    SegmentTree(vector<int> &arr){
        n = arr.size();
        tree.resize(4 * n);
        builtTree(arr, 0, n-1, 0);
    }

    int queryMin(int qi, int qj){
        return queryMinUtil(qi, qj, 0, n-1, 0);
    }
    
    void updateMin(int idx, int newVal){
        updateMinUtil(idx, newVal, 0, n-1, 0);
    }

    void printTree(){
        for(int i = 0; i < tree.size(); i++){
            cout << tree[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    vector<int> arr = {62,17,18,22,45,48,66,55};

    SegmentTree st(arr);
    st.printTree();

    cout<< "Minimum in range [0, 3]: " << st.queryMin(0, 3) << endl;
    cout<< "Minimum in range [2, 5]: " << st.queryMin(2, 5) << endl;

    st.updateMin(4,5);
    st.printTree();

    return 0;
}