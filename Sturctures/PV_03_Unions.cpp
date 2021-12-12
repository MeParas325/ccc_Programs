#include<iostream>
using namespace std;

union money{
    int rice;
    int car;
    double pounds;
};

int main(){
   union money m1;
   m1.rice = 4;
   m1.car = 13348;
   cout<<m1.rice<<endl;
   cout<<m1.car;
}