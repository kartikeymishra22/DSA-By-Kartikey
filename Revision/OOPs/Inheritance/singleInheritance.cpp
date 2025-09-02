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
    Fish f;
    f.name = "Goldy";
    f.color = "Golden";
    f.fins = 4;

    cout<<"Name of fish: "<<f.name<<endl;
    cout<<"Color of fish: "<<f.color<<endl;
    cout<<"Number of fins: "<<f.fins<<endl;

    f.eat();
    f.breathe();
    f.swim();

    return 0;
}