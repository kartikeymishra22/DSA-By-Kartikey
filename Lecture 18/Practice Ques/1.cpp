#include<iostream>
using namespace std;

class Complex {
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

    Complex operator -(Complex &c2){
        int resReal = this->real - c2.real;
        int resImg = this->img - c2.img;

        Complex c3(resReal, resImg);
        return c3;
    }

};

int main(){

    Complex c1(8,2);

    Complex c2(4,1);

    // c1.showNum();
    // c2.showNum();

    Complex c3 = c1 - c2;
    c3.showNum();


}