#include<iostream>
using namespace std;

class Parent{
    public:
    void show(){
        cout<<"parent class function"<<endl;
    }

    virtual void hello(){
        cout<<"say hello\n";
    }
};

class Child : public Parent{
    public:
    void show(){
        cout<<"child class function called\n";
    }

    void hello(){
        cout<<"say child hello\n";
    }
};

int main(){
    Child c1;
    Parent *ptr;
    ptr = &c1;
    ptr->hello();

    return 0;
}