#include<iostream>
#include<queue>
#include<map>
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

void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

void topVeiw(Node* root){
    queue<pair<Node* ,int>> Q; //(Node, HD)
    map<int , int> m;  // (HD, Node-> data)

    Q.push(make_pair(root, 0));

    while(!Q.empty()){
        pair<Node* , int> curr = Q.front();

        Q.pop();

        Node* currNode = curr.first;
        int currHD = curr.second;

        if(m.count(currHD) == 0){
            m[currHD] = currNode->data;
        }

       if(currNode->left != NULL){
        pair<Node*, int> left = make_pair(currNode->left, currHD-1);
        Q.push(left);
       } 

       if(currNode->right != NULL){
        pair<Node* , int> right = make_pair(currNode->right, currHD + 1);
        Q.push(right);

       }


    }

    for(auto it : m){
        cout<<it.second<<" ";

    }
    cout<<endl;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    Node* root = buildTree(nodes);

    // cout<<"The root is -> "<<root->data<<endl;

    preOrder(root);

    cout<<endl;

    topVeiw(root);



    return 0;

}