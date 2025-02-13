#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> s;

    s.push("Kartikey");
    s.push("Entrepreneur");
    s.push("Billionaire");

    while(!s.empty()){
        cout<<"Top element is : "<<s.top()<<endl;
        s.pop();
    }

    // cout<<"Top element is : "<<s.top()<<endl;

    // s.pop();
    // cout<<"After popping top element : "<<s.top()<<endl;

    // cout<<"The size of the stck is : "<<s.size()<<endl;

    // cout<<"Is stack empty : "<<s.empty()<<endl;

    return 0;
}