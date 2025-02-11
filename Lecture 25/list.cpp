#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int val){
            data = val;
            next = NULL;
        }

        ~Node(){
            if(next != NULL){
                cout<<"destructor is called"<<endl;
                delete next;
                next = NULL;
            }
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

        void push_front(int data){

            Node* temp = new Node(data);
            if(head == NULL){
                head = tail = temp;
            }

            else{
                temp->next = head;
                head = temp;
            }

        }

        void push_back(int data){
            Node* temp = new Node(data);

            if(tail == NULL){
                head = tail = temp;
            }
            else{
                tail->next = temp;
                tail= temp;
            }
        }

        void insertAtmiddle(int pos, int data){
            Node* newNode = new Node(data);

            Node* temp = head;

            for(int i = 0; i<pos-1; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void pop_front(){
            if(head == NULL){
                cout<<"pop function is called but list is empty so nothing will happen"<<endl;
            }

            else{
               Node* temp = head;
               head = head->next;
               temp->next = NULL;
               delete temp;

            }
        
        }

        void print(){
            Node* temp = head;

            while(temp != NULL){
                // cout<<"print function is called"<<endl;
                cout << temp->data <<"->";
                temp = temp->next;
            }
            // cout<<"print function is finished"<<endl;
            cout<<"NULL"<<endl;
        }

        ~List(){
            if(head != NULL){
                delete head;
                head = NULL;
            }
        }

};


int main(){

    List l1;

    l1.push_front(2);
    l1.push_front(1);
    l1.print();
    l1.push_back(3);
    l1.push_back(4);
    l1.print();
    l1.insertAtmiddle(3,5);
    l1.print();


}