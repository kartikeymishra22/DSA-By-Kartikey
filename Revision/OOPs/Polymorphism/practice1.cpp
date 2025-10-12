#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;

    public:
    Complex(int real, int ing){
        this->real = real;
        this->img = ing;
    }

    void print(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    Complex operator -(Complex &c1){
        int real = this->real - c1.real;
        int img = this->img - c1.img;
        Complex c3(real, img);
        return c3;  
    }
};

int main(){

    Complex c1(3,4);
    Complex c2(5,6);
    c1.print();
    c2.print();
    Complex c3 = c2 - c1;
    c3.print();
  
    return 0;

}