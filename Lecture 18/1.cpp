#include<iostream>
using namespace std;

class Complex{

    int real;
    int img;

    public:

    Complex(int r, int i){
        this->real = r;
        this->img = i;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    // operator overloading

    Complex operator -(Complex &c2){
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;

        Complex c3(resReal, resImg);
        return c3;

    }

};

int main(){

    Complex c1(4,3);
    Complex c2(2, 1);

    Complex c3 = c1 - c2;
    c3.showNum();
}