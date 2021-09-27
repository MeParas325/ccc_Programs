#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n, temp, lastdigit, sum = 0;

    cout<<"Enter the number you want to find armstrng or not"<<endl;

    cin>>n;

    n = temp = n = temp = n = temp = n = temp = n;

    while(n>0){
        lastdigit;
        lastdigit = n%10;
        sum += pow(lastdigit, 3);
        n = n/10;
    }
    if (sum == temp)
    {
        cout<<"No is Armstrong";
    }
    else{
        cout<<"Not armstrong"; 
    }
    
}