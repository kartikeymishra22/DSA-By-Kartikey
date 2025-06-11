#include<iostream>
#include<vector>
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

    public:
    SegmentTree(vector<int> &arr){
        n = arr.size();
        tree.resize(4 * n);
        buildTree(arr, 0, n - 1, 0);
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

    return 0;
}