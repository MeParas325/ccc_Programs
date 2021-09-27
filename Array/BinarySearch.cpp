#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            
            return mid;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}
int main(){

    int n, i, key, value;
    cout<<"Enter the number of elements in array:"<<endl;
    cin>>n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element which you want to search in array:";
    cin>>key;


    value = binarySearch(arr, n, key);
    
    if(value == -1){
        cout<<"Key is not found";
    }
    else{
        cout<<"Key is found at location:"<<value;
    }


}