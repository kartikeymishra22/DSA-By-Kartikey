#include<iostream>
using namespace std;

class Animal {
    public:
    void breathe(){
        cout<<"Animal breathing..."<<endl;
    }

    void swim(){
        cout<<"Animal is swimming...\n";
    }
};

class Person{
    public:
    void eats(){
        cout<<"eating food\n";
    }
};

class Dog: public Animal, public Person{
    public:
    void bark(){
        cout<<"Barking..\n";
    }
};

int main(){
    Dog d1;
    d1.bark();
    d1.breathe();
    d1.eats();

    return 0;
}