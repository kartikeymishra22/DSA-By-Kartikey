#include<iostream>
using namespace std;

class Student{

    private:
        string name;
        int age;
        int roll_no;

    public:
    int getAge(){
        return this->age;
    }

};


int main(){
    Student s1;
    cout<<"Everytyhing is private so we can't access it directly"<<endl;
    cout<<s1.getAge();
    return 0;
}