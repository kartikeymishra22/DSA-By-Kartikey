#include<iostream>
using namespace std;

class Print{
    int number;
    string name;

    public:
    void show(int number){
        cout<<number<<endl;
    }

    void show(string name){
        cout<<name<<endl;
    }
};

int main(){
    Print p1;
    p1.show(25);
    p1.show("Kartikey");

    return 0;
}