#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node *next;

    // constructor
    Node (int val){
        this->data = val;
        this->next = NULL;
    }

};



void insertAtTail(Node* &tail, int val){
    Node* temp = new Node(val);
    tail -> next = temp;
    tail = temp;
}

void insertAtHead(Node* &head, int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAtPosition(Node* &head, Node* &tail,  int position, int val){
    if(position == 1){
        insertAtHead(head, val);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position -1){
        temp = temp->next;
        cnt++;
    }
    
    if(temp->next ==NULL){
        insertAtTail(tail, val);
        return;
    }

    Node* insertATpos = new Node(val);
    insertATpos->next = temp->next;
    temp->next = insertATpos;

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    Node* n1 = new Node(10);

    Node* head = n1;
    Node* tail = n1;
    print(head);

    insertAtHead(head, 20);
    print(head);

    insertAtHead(head, 30);
    print(head);

    insertAtTail(tail, 40);
    print(head);

    insertAtPosition(head, tail, 3, 50);
    print(head);

    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;

    return 0;


}