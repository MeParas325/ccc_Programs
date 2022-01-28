#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    friend Complex setComplex(Complex a, Complex b);
    public:
       void setNumber(int a1, int b1){
           a = a1;
           b = b1;
       }
       void getNumber(){
           cout<<"Numbers are:"<<a<<" and "<<b<<endl;
       }
};

Complex setComplex(Complex c1, Complex c2){
    Complex c3;
    cout<<"Value of c is:"<<c<<endl;
    c3.setNumber((c1.a+c2.a), (c2.b + c2.b));
    return c3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 2);
    c1.getNumber();

    c2.setNumber(3, 4);
    c2.getNumber();

    sum = setComplex(c1, c2);
    sum.getNumber();
}