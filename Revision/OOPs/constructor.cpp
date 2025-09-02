#include<iostream>
using namespace std;

class Car {
    string name;
    string color;

    public:
    Car(){
        cout<<"Constructor called"<<endl;
    }

    Car(string n, string c){
        cout<<"Parameterized Constructor called"<<endl;
        name = n;
        color = c;
    }

};

int main(){
    Car c1;
    Car c2("BMW", "Black");
    
    return 0;
}