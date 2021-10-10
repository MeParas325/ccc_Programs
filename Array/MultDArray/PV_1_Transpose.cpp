#include<iostream>
using namespace std;

int main(){
    int row, column;

    cout<<"Enter the number of rows and columns in square matrix:";
    cin>>row>>column;

    int arr[row][column];

    if(row != column){
        cout<<"Please enter equal rows and columns!";
        return 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Before transposing array is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            arr[j][i] = arr[i][j];
        }
    }
    cout<<"After transposing array is:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    

}