#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number:";

    cin>>n;

    for (int i = i; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {  
            int sum = i + j;
            if(sum%2 == 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        
        cout<<endl;
        
    }
    
}