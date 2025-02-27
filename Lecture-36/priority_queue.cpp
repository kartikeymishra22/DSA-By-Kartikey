#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);

    cout <<"Top element is : "<< pq.top() << endl;
}