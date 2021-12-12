#include<iostream>
using namespace std;

int main(){
    int marks[] = {2, 3, 4, 5};

    int *p = marks;

    cout<<p<<endl;
    cout<<*p<<endl;

    p++;
    cout<<*p<<endl;
    cout<<p<<" Address value is:"<<*(p++)<<endl;
    cout<<p<<" Address value is:"<<*(p)<<endl;
    cout<<&p<<" is the address of p"<<endl;
    cout<<(*++p);
    cout<<(p)<<endl;
    cout<<(++p);

}