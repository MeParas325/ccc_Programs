#include<iostream>
using namespace std;
int main(){

    int n, lastdigit;
    int reverse = 0;

    cout<<"Enter the number you want to reverse of:";

    cin>>n;

    while (n>0)
    {
         lastdigit = n%10;
         reverse = reverse*10 + lastdigit;
         n = n/10;

    }

    cout<<reverse;
    


}