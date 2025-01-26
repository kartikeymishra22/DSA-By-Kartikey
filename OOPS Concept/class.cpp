#include<iostream>
using namespace std;

class Hero{

    private:
        int health;
        char level;

    public:  
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){

    // Static Memory Allocation
    Hero a;
    a.sethealth(100);
    a.setLevel('A');

    cout<<"Health is : "<<a.getHealth()<<endl;
    cout<<"Level is : "<<a.getLevel()<<endl;

    // Dynamic Memory Allocation

    Hero *b = new Hero;
    b->sethealth(200);
    b->setLevel('B');

    cout<<"Health is : "<<(*b).getHealth()<<endl;
    cout<<"Level is : "<<(*b).getLevel()<<endl;

    cout<<"Health is : "<<b->getHealth()<<endl;
    cout<<"Level is : "<<b->getLevel()<<endl;

    // Hero h1;

    // h1.sethealth(100);
    // h1.setLevel('A');

    // // cout<<"Health is : "<<h1.health<<endl;
    // // cout<<"Level is : "<<h1.level<<endl;

    // cout<<"Health is : "<<h1.getHealth()<<endl;
    // cout<<"Level is : "<<h1.getLevel()<<endl;
    // cout<<"Size of Hero object is : "<<sizeof(h1)<<endl;

}