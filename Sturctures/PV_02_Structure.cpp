#include<iostream>
using namespace std;
struct Employee
{
    int empid;
    char favChar;
    int salary;
};

typedef struct student{
    int roll;
    char ch;
}st;

int main(){
    struct Employee Paras, Tannu;
    struct Employee Satish;

    st Palak, Riya;

    Palak.roll = 30;
    Palak.ch = 'H';

    Riya.roll = 8;
    Riya.ch = 'Y';

    cout<<Palak.roll<<endl;
    cout<<Riya.ch<<endl;


    Paras.empid = 34;
    Paras.favChar = 'X';
    Paras.salary = 120000000;

    Tannu.empid = 23;
    Tannu.favChar = 'T';
    Tannu.salary = 129505888;

    Satish.empid = 69;
    Satish.favChar = 'N';
    Satish.salary = 4534534;

    cout<<"The value is: "<<Paras.empid<<endl;
    cout<<"The value is: "<<Paras.favChar<<endl;
    cout<<"The value is: "<<Paras.salary<<endl;

    cout<<"The value is: "<<Tannu.empid<<endl;
    cout<<"The value is: "<<Tannu.favChar<<endl;
    cout<<"The value is: "<<Tannu.salary<<endl;

    cout<<"The value is: "<<Satish.empid<<endl;
    cout<<"The value is: "<<Satish.favChar<<endl;
    cout<<"The value is: "<<Satish.salary<<endl;

}