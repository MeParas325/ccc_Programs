#include<iostream>
using namespace std;

void fibbo(int n){
    int first = 0;
    int second = 1;
    int next;
    for (int i = 1; i <= n ; i++)
    {
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;
    }
    
}

int main(){
    int n;

    cin>>n;

    fibbo(n);

}