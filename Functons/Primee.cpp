#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i <= sqrt(num); i++)
    {
        if(num%i == 0){
            return false;
        }
    }

    return true;
    
}
int main(){
    int n1, n2;

    cout<<"Enter the numbers in between you want to prime numbers:";

    cin>>n1>>n2;

    for (int i = n1; i <= n2; i++)
    {
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    
}