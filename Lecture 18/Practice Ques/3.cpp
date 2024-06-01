#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;

public:

    Person(string name , int age){
        this->name = name;
        this->age = age;
    }

};

class Child : public Person{
private:
    string studentId;
public:
   Child(string n, int a, string id) : Person(n, a) {
     studentId = id; 
    } 
 
 
    void displayStudentInfo() { 
    cout << "name : " << this->name << endl; 
    cout << "age : " << this->age << endl; 
    cout << "studentId : " << this->studentId << endl; 
    } 
};

int main(){
    Child student("Alice", 20, "S12345"); 
    student.displayStudentInfo(); 
    return 0; 

}