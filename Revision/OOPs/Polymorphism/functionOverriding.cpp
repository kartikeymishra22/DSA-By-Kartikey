#include<iostream>
using namespace std;

class parent{
    int a;
    int b;

    public:
    parent(){
        cout<<"parent constructor called"<<endl;
    }

    void show(){
        cout<<"parent class show function called"<<endl;
    }
};

class child : public parent{
    int x;
    int y;

    public:
    child(){
        cout<<"child class constructor called"<<endl;
    }

    void show(){
        cout<<"child class function called"<<endl;
    }
};

int main(){

    child c1;
    c1.show();
    return 0;
}