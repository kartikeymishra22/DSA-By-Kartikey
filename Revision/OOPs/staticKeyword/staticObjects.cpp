#include<iostream>
using namespace std;

class Example{
    public:
    Example(){
        cout<<"Constructor called"<<endl;
    }

    ~Example(){
        cout<<"Destructor called"<<endl;
    }
};


int main(){
    int a = 0;
    if(a == 0){
      static  Example obj1;
    }

    cout<<"End of main function"<<endl;

    return 0;
}