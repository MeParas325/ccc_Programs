#include<iostream>
using namespace std;

void Fact(int n){
    int Factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        Factorial = Factorial * i;
    }

    cout<<Factorial;
    
}

int main(){
    int n;

    cout<<"Enter the number which you want to find the factorial:";

    cin>>n;

    Fact(n);
}