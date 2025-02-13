#include<iostream>
#include<stack>
using namespace std;

// Function to push element at bottom of stack

void pushAtBottom(stack<int> &s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s, value);
    s.push(temp);

}


int main(){
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    pushAtBottom(s,4);

    while(!s.empty()){
        cout << s.top() <<" ";
        s.pop();
    }
    cout<<endl;
}

