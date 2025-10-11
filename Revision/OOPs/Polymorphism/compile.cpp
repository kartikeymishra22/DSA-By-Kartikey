#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
    string name;
    int model;

    Car(string name, int model){
        this->name = name;
        this->model = model;
    }

    void start(){
        cout<<"Car started"<<endl;
    }

    void start(string key){
        cout<<"Car started with key: "<<key<<endl;
    }

    void start(int time){
        cout<<"Car will start in "<<time<<" seconds"<<endl;
    }

};

int main(){

    Car c1("BMW", 2020);

    // cout<<c1.name<<endl;
    // cout<<c1.model<<endl;

    c1.start();
    c1.start("myKey");
    c1.start(5);
    return 0;
}