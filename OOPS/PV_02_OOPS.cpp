#include<iostream>
#include<string>
using namespace std;

class Binary{
    // By default the members of classes are private
    string s;
    void onesCom();
    public:
       void bNum();
       void chkNum();
       void display();
       
};

void Binary :: bNum(){
    cout<<"Enter the Number you want to check binar or not:"<<endl;
    cin>>s;
}

void Binary :: chkNum(){
    cout<<"Checking the number of yours is binary or not:"<<endl;

    for(int i = 0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Not a binary number";
            return;
        }
    }
    onesCom();
}

void Binary :: onesCom(){
    cout<<"After ones complement your Binary number is:"<<endl;

    for(int i = 0; i<s.length(); i++){
        if(s.at(i) == '0'){
            s[i] = '1';
        }
        else{
            s[i] = '0';
        }
    }

    display();
}

void Binary :: display(){
    for (int i = 0; i < s.length(); i++)
    {
         cout<<s[i];
    }
}

int main(){
    Binary b;
    b.bNum();
    b.chkNum();
    // b.onesCom();
    return 0;
 
}