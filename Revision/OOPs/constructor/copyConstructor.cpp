#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    string color;

    Car(string name, string color){
        cout<<"Constructor of c1 called"<<endl;
        this->name = name;
        this->color = color;
    }

    Car(Car &original){
        cout<<"Copy constructor callled"<<endl;
        name = original.name;
        color = original.color;
    }
};

int main(){
    Car c1("BMW","Red");
    Car c2(c1);

    cout<<"Name of car c2 : "<<c2.name<<endl;
    cout<<"Color of car c2 : "<<c2.color<<endl;

    return 0;
}