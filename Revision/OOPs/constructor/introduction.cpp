#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float cgpa;

    void getPercentage(){
        cout<<(cgpa * 10) <<endl;
    }

    void setName(string s){
        name = s;
    }

    void getName(){
        cout<<name<<endl;
    }

};

int main(){
    Student s1;
    s1.name = "Ritik";
    s1.age = 21;
    s1.cgpa = 9.1;

    s1.getPercentage();
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;

    cout<<sizeof(s1)<<endl;
    s1.setName("Ritik Kumar");
    s1.getName();
    return 0;

}