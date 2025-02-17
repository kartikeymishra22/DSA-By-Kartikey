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

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

void preorder(Node* root){

    if(root == NULL){
        return;
    }
    // root
    cout<<root->data<<" ";

    // left
    preorder(root->left);

    // right
    preorder(root->right);

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
    vector<int> nodes = {1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};

    Node* root = buildTree(nodes);

    // cout<<"Root is = " <<root->data<<endl;

    preorder(root);
    cout<<endl;

    cout<<"Height is = "<<height(root)<<endl;

    return 0;
}