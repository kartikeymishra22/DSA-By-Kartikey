#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }

};

static int idx = -1;

Node* buildTree(vector<int> nodes2){
    idx++;
    if(nodes2[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes2[idx]);
    currNode->left = buildTree(nodes2);
    currNode->right = buildTree(nodes2);

    return currNode;

}

void preorder(Node* nodes2){
    if(nodes2 == NULL){
        return;
    }

    cout<<nodes2->data<<" ";
    preorder(nodes2->left);
    preorder(nodes2->right);

}

int height(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currHt = max(leftHt, rightHt) + 1;

    return currHt;
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    // vector<int> nodes2 = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1};

    Node* root = buildTree(nodes);

    // preorder(root);


    cout<<"Height is = "<<height(root)<<endl;

   return 0;

}