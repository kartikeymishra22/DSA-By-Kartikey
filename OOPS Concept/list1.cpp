#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

class List{
    public:
    Node*head;
    Node* tail;

    List(){
        this->head = NULL;
        this->tail = NULL;  
    }

    void insertAtHead(Node* &head, int val){
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }

    void print(Node* &head){
        Node* temp = head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    void insertAtTail(Node* &tail, int val){
        Node* temp = new Node(val);
        tail->next = temp;
        tail = temp;
    }

    void insertAtmiddle(Node*& head, int position, int val){

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

        if(temp->next == NULL){
            insertAtTail(tail, val);
            return;
        }

        Node* insertpos = new Node(val);
        insertpos->next = temp->next;
        temp->next = insertpos;
    }
};


int main(){
    Node* l1 = new Node(1);

    Node* head = l1;
    Node* tail = l1;

    List myList;
    myList.print(head);

    myList.insertAtHead(head, 2);
    myList.print(head);

    myList.insertAtTail(tail, 3);
    myList.print(head);

    myList.insertAtmiddle(head, 2, 4);
    myList.print(head);
}
