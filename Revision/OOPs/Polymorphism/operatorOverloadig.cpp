#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    void operator + (B &ob){
        int value1 = this->a;
        int value2 = this->a;

        cout<<"Value 1 is : " << value2 - value1 << endl;
    }
};

class Complex{
    int real;
    int img;

    public:
    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }
};

int main(){
    Complex c1(2,4);
    Complex c2(3,5);

    c1.showNum();
    c2.showNum();
    return 0;

}