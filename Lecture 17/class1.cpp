#include<iostream>
#include<string>
using namespace std;

class Student {
    string name;
    int age;

public:
    // getter
    string getName(){
        return name;
    }

    // setter

    void set(string nameVal){
        name = nameVal;
    }

};

int main(){

    Student s1;

    s1.set("kartikey");

    cout<<s1.getName()<<endl;

}