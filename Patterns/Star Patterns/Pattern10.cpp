#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number to print the star pattern:";

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<" ";
        }
        for (int j = -1; j<=(i*2)-1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    for (int i = n; i >= 0; i--)
    {
        if(i == n){
            continue;
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<" ";
        }
        for (int j = -1; j<=(i*2)-1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}