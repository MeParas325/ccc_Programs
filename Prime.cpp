#include<iostream>
#include<cmath> 
using namespace std;
int main(){
    int n, i;
    int count = 0;

    cout<<"Enter the number which you want to know is prime or not:";

    cin>>n;

    for (i = 2; i <= sqrt(n); i++)
    {
        if(n%i == 0){
             cout<<"Number is not a prime number";        
             count = 1;                                    //  i = 2                                                    
             break;
        }
        
    }
    if(count ==  0){
        cout<<"No is a prime number"; 
    }

    
}