#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:
    Complex(int real, int img){
        this->real = real;
        this->img = img; 
    }

    void showNum(){
        cout<<real<<" + "<<img<<" i"<<endl;
    }

    Complex operator+(Complex &c2){
        int resReal = this->real+ c2.real;
        int resImg = this->img + c2.img;

        Complex c3(resReal, resImg);
        return c3;
    }

};

int main(){

    Complex c1(1,2);
    Complex c2 (3,4);

    c1.showNum();
    c2.showNum();

    Complex c3 = c1 + c2;
    c3.showNum();


}