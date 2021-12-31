#include<iostream>
using namespace std;
int c = 0;
int main(){
    int a, b, c;
    a = 10;
    b = 10;
    c = a+b;

    cout<<"Local variable c:"<<c<<endl;
    cout<<"Global variable c:"<<::c<<endl;
    float x = 34;
    float &y = x;
    cout<<x<<y;
}