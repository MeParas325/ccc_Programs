#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    int m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j]>arr[j+1]){
                  int temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
            }
        }
        
    }
    
    
}
int main(){
   int n;

   cout<<"Enter the numebr of elements into the array:";

   cin>>n;

   int arr[n];

   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }

   BubbleSort(arr, n);

   for (int i = 0; i < n; i++)
   {
       cout<<arr[i]<<" ";
   }
   

}