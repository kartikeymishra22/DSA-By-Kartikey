#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color){
        cout<<"Constructor called"<<endl;
        this->name = name;
        this->color = color;
        this->mileage = new int;
        *mileage = 10;
    }

    Car(Car &original){
        cout<<"Copy constructor called"<<endl;
        name = original.name;
        color = original.color;
        mileage = new int;
        *mileage = *original.mileage;
    }
};

int main(){
    Car c1("BMW","Black");
    // cout<<"Name of car is "<<c1.name<<endl;
    // cout<<"Color of car is "<<c1.color<<endl;
    // cout<<"Mileage of car is "<<*c1.mileage<<endl;

    Car c2(c1);
    cout<<"Name of car is "<<c2.name<<endl;
    cout<<"Color of car is "<<c2.color<<endl;
    cout<<"Mileage of car C2 is "<<*c2.mileage<<endl;
    *c2.mileage = 20;

    cout<<"Mileage of car C1 is "<<*c1.mileage<<endl;
    cout<<"Mileage of car C2 is "<<*c2.mileage<<endl;


    return 0;
}