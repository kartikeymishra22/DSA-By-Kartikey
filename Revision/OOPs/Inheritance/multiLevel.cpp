#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    string color;

    void eat(){
        cout<<"eats..\n";
    }

    void brathe(){
        cout<<"breathe ..\n";
    }
};

class Fish : public Animal{
    public:
    void swim(){
        cout<<"Swim..\n";
    }
};

class Dog: public Fish{
    void bark(){
        cout<<"Barking..\n";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.brathe();
    d1.swim();

    return 0;
}