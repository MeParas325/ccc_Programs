#include<iostream>

using namespace std;

int main(){
    int n;

    cout<<"Enter the number for which you want to print butterfly pattern:";

    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        int spaces = 2*n - 2*i;

        for (int j = 1; j<= spaces; j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }

        int spaces = 2*n - 2*i;

        for (int j = 1; j<= spaces; j++)
        {
            cout<<" ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    


}