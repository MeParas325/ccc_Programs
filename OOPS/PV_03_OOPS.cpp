#include<iostream>
using namespace std;

class Product{
    int counter = 0;
    int productId[10];
    int productNumber[10];

    public:
       void setData();
       void display();
};

void Product :: setData(){
    cout<<"Enter the id of Product no "<<counter + 1<<endl;
    cin>>productId[counter];
    cout<<"Enter the number of the product no "<<counter + 1<<endl;
    cin>>productNumber[counter];
    counter++;
}

void Product :: display(){
    cout<<"Displaying your Products Id and their numbers:"<<endl;
    for(int i = 0; i<counter; i++){
        cout<<"Product Id:"<<productId[i]<<" &&"<<" Product No:"<<productNumber[i]<<endl; 
    }
}

int main(){
    Product p;
    int n;
    cout<<"Enter the number of products you want to add:"<<endl;
    cin>>n;
    for(int i = 0; i<n; i++){
        p.setData();
    }
    p.display();
}