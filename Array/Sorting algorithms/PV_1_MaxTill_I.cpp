#include<iostream>
using namespace std;

int main(){
    int n;
    int max = -9999;

    cout<<"Enter the number of elements of the array:";

    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int j = 0; j < n; j++)
    {
        if(arr[j]>max){
            max = arr[j];
            cout<<max<<" ";
        }
        else{
            cout<<max<<" ";
        }
    }
    
}