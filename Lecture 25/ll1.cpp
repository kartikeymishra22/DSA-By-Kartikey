#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    public: 
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){

        Node* temp = new Node(val);
        
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }
    }

    void push_back(int val){
        Node* temp = new Node(val);

        if(head == NULL){
            head = tail = temp;
        }
        else{
            tail ->next = temp;
            tail = temp;
        }
    }

    void print(){
        Node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<< "NULL" <<endl;
    }

};

int main(){

    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();

    ll.push_back(4);
    ll.print();

}