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

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currHt = max(leftHt, rightHt)+ 1;

    return currHt;
}

int dia1(Node* root){
    if(root == NULL){
        return 0;
    }

    int rootDia = height(root->left) + height(root->right) + 1;
    int leftDia = dia1(root->left);
    int rightDia = dia1(root->right);

    int dia = max(rootDia, max(leftDia, rightDia));

    return dia;
}

int main(){
    vector<int> nodes = {1,2,4,9,10,-1,-1,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};

    Node* root = buildTree(nodes);
    // cout<<"The root is -> "<<root->data<<endl;

    // preorder(root);

    cout<<"Height of the tree is -> "<<height(root)<<endl;

    cout<<"Diameter of the tree is -> "<<dia1(root)<<endl;

    return 0;
}