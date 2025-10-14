#include<iostream>
using namespace std;

class Example{
    public:
    static int count;

};

int Example::count = 0; //static data member initialization outside the class with scope resolution operator (::

int main(){

    Example obj1;
    Example obj2;
    Example obj3;

    cout<<obj1.count++<<endl; //0
    cout<<obj2.count++<<endl; //0
    cout<<obj3.count++<<endl; //0


}