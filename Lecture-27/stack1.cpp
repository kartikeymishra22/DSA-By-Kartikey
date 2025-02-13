#include<iostream>
#include<vector>
using namespace std;

class Stack{

    vector<int> vec;

 public:
    void push(int val){
        vec.push_back(val);
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return; 
        }
        vec.pop_back();
    }

    int top(){
        if(isEmpty()){
            cout<<"There is no element in Stack"<<endl;
            return -1;
        }

        int lastIDX = vec.size() -1;
        return vec[lastIDX];
    }

    bool isEmpty(){
       return vec.size() == 0;
    }

};

int main(){

    Stack s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}