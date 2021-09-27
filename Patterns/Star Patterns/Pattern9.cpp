#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number to print the pattern:";

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i ; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    
}