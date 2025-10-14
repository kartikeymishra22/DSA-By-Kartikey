#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student : public Person{
    public:
    string id;

    Student(string name, int age, string id){
        this->name = name;
        this->age = age;
        this->id = id;
    }

    void displayInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"ID: "<<id<<endl;
    }
};

int main(){

    Student s1("Kartikey", 20, "S12345");
    s1.displayInfo();

    return 0;

}