#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> s;
    s.push("kartik");
    s.push("Entrepreneur");
    s.push("Billionaire");

    cout<<"The first element is : "<<s.front()<<endl;
    cout<<"The size before pop : "<<s.size()<<endl;

    s.pop();

    cout<<"The first element after pop : "<<s.front()<<endl;
    cout<<"The size after pop : "<<s.size()<<endl;

    cout<<"checking queue is empty or not : "<<s.empty()<<endl;

}