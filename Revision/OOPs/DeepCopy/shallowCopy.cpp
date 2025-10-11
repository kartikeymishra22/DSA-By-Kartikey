#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    string color;
    int *mileage;

    Car(string name, string color){
        cout<<"Constructor Called"<<endl;
        this->name = name;
        this->color = color;
        this->mileage = new int;
        *mileage = 12;
    }

    Car( Car &original){
        cout<<"Copy Constructor Called"<<endl;
        name = original.name;
        color = original.color;
        mileage = original.mileage;
    }
};

int main(){
    Car c1("BMW", "White");
    Car c2(c1);

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    cout<<*c2.mileage<<endl;
    *c2.mileage = 10;

    cout<<*c1.mileage<<endl;

    return 0;
}