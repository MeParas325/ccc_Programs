#include<iostream>
using namespace std;


int main(){

    int arr[] = {10, 20, 30};

    cout<<*arr<<" ";
    cout<<arr<<" ";

    int *arrptr = arr;

    cout<<arrptr<<' ';

    for(int i = 0; i<3; i++){
        cout<<arrptr<<" ";
        arrptr++;
    }cout<<endl;

    for(int i = 0; i<3; i++){
        cout<<*arrptr<<" ";
        arrptr++;
    }cout<<endl;


    // for(int i = 0; i<3; i++){
    //     cout<<*(arrptr+i)<<" ";
    //     // arrptr++;
    // }cout<<endl;

    for(int i = 0; i<3; i++){
        cout<<*(arr+i)<<" ";
        // arrptr++;
    }cout<<endl;
}