#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    string color;

    void eat(){
        cout<<"Eats ..\n";
    }

    void breathe(){
        cout<<"Breathe..\n";
    }
};

class Fish : public Animal{
    public:
    int fins;
    
    void swim(){
        cout<<"Fish is swimming...\n";       
    }
};

int main(){

}