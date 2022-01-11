#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
      void setData(){
        cout<<"Enter the ID Number of the Employee:"<<endl;
        cin>>id;
        count++;
      }
      void display(){
        cout<<"ID Number of the Employee is:"<<id<<endl;
        cout<<"No of the Employee is:"<<count<<endl;
      }
};

int Employee :: count;

int main(){
    Employee Paras, Tannu;
    Paras.setData();
    Paras.display();

    Tannu.setData();
    Tannu.display();
}