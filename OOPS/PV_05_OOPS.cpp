#include<iostream>
using namespace std;

class Employee{
    int a;
    int b;

    public:
       void setData(int a1, int b1){
           a = a1;
           b = b1;
       }
       void printNumber(){
           cout<<"Your complex is:"<<a<<"+"<<b<<"i"<<endl;
       }
       void sumByNumber(Employee name1, Employee name2){
           a = name1.a + name2.a;
           b = name1.b + name2.b;
       }

    };

int main(){
    Employee Paras, Tannu, Manoj;
    Paras.setData(1, 2);
    Paras.printNumber();

    Tannu.setData(3, 4);
    Tannu.printNumber();

    Manoj.sumByNumber(Paras, Tannu);
    Manoj.printNumber();


}

