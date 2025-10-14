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

    void print(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    Complex operator - (Complex &c1){
        int realpPart = this->real - c1.real;
        int imgPart = this->img - c1.img;
        Complex result(realpPart,imgPart);
        return result;
    }

};

int main(){
    Complex c1(10, 20);
    Complex c2(30, 40);
    c1.print();
    c2.print();
    Complex c3 = c2 - c1; // c1.operator-(c2);
    c3.print();
    return 0;
}