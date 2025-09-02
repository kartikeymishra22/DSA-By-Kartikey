#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;
    int *mileage;

    public:
    Car(string name, string color){
        this->name = name;
        this->color = color;
        this->mileage = new int;
        *mileage = 12;
    }

    Car(Car &original){
        this->name = original.name;
        this->color = original.color;
        this->mileage = original.mileage;
    }

    ~Car(){
        cout<<"Destructor Called"<<endl;
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }
    }
};

int main(){
    Car c1("AUDI", "blue");
    Car c2(c1);
    
}