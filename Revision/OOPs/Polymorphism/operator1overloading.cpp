#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    void operator + (Complex & c2){
        int r = real + c2.real;
        int i = img + c2.img;
        cout<<"After adding: "<<r<<" + "<<i<<"i"<<endl;
    }
};

int main(){
    Complex c1(3,4);
    Complex c2(5,6);
    c1.showNum();
    c2.showNum();
    c1.operator+(c2); // c1 + c2
    return 0;
}