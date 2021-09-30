#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = arr[i];
            if(arr[j]<arr[i]){
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    
}
int main(){
    int n;

    cout<<"Enter the number of elements of the array:";
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<i<<"element into the array:";
        cin>>arr[i];
    }
    
    SelectionSort(arr, n);

    for (int j = 0; j < n; j++)
    {
        cout<<arr[j]<<" ";
    }


}