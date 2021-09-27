#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number of rows and columns"<<endl;
    int row, column;

    cin>>row>>column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}