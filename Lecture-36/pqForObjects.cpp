#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Student{
    public:
    string name;
    int marks;

    Student(string name, int marks){
        this->name = name;
        this->marks = marks;
    }

    bool operator < (const Student &obj) const{
        return this->marks <obj.marks;
    }
};

int main(){
    priority_queue<Student> pq;

    pq.push(Student("Aman", 85));
    pq.push(Student("Rajat", 75));
    pq.push(Student("Jatin", 65));
    pq.push(Student("Atul", 95));

    while(!pq.empty()) {
        cout<<"top is : "<<pq.top().name<<","<<pq.top().marks<<endl;
        pq.pop();
    }

    return 0;
}