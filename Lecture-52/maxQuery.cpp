#include<iostream>
#include<vector>
#include<climits> // For INT_MIN
using namespace std;

class SegmentTree{
    vector<int> tree;
    int n;

    void buildTree(vector<int> & arr, int st, int end, int node){
        if(st == end){
            tree[node] = arr[st];
            return ;
        }

        int mid = st + (end - st )/ 2;

        buildTree(arr, st, mid, 2 * node + 1);
        buildTree(arr, mid + 1, end, 2 * node + 2);
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }

    int maxqueryUtil(int qi, int qj, int si, int sj, int node){
        if(qj < si || sj < qi){
            return INT_MIN; // Return a value that won't affect the max
        }
        else if (qi <= si && sj <= qj){
            return tree[node];
        }

        else{
            int mid = si + (sj - si) / 2;
            int leftMax = maxqueryUtil(qi, qj, si, mid, 2 * node + 1);
            int rightMax = maxqueryUtil(qi, qj, mid + 1, sj, 2 * node + 2);
            return max(leftMax, rightMax);
        }

    }

    public:
    SegmentTree(vector<int> &arr){
        n = arr.size();
        tree.resize(4 * n);
        buildTree(arr, 0, n - 1, 0);
    }

    int maxquery(int qi, int qj){
        return maxqueryUtil(qi,qj,0,n-1,0);
    }

    void printTree(){
        for(int i = 0; i < tree.size(); i++){
            cout << tree[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    vector<int> arr = {6,8,-1,2,17,1,3,2,4};

    SegmentTree st(arr);
    st.printTree();

    cout<<st.maxquery(0, 4) << endl; // Should return 17

    return 0;
}