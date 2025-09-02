#include<iostream>
using namespace std;

class Animal {
    public:
    void eat(){
        cout<<"Eating..\n";
    }

    void swim(){
        cout<<"swimming..\n";
    }
};

class Person: public Animal{
    public:
    void read(){
        cout<<"reading...\n";
    }
};

class Dog: public Animal{
    public:
    void bark(){
        cout<<"Barking..\n";
    }
};

int main(){
    Person P1;
    P1.eat();
    P1.read();
    P1.swim();

    Dog d1;
    d1.bark();
    d1.eat();
    d1.swim();

    return 0;
}