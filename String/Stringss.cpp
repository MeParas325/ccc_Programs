#include<iostream>
// #include<string>
using namespace std;

int main(){
    //First way in c++ to take a string
    // string str;
    // cin>>str1;

    //Second way to deckare any string
    // string str2 = "ParasVerma";
    // cout<<str2;

    //To repeatedky print any alphabet
    // string str1(5, 'n');
    // cout<<str1<<endl;

    //With this you can take input a whole sentence form the user
    // string str3;
    // getline(cin, str3);
    // cout<<str3<<endl;

    //Append function in string
    string s4 = "Par";
    string s5 = "as";
    s4.append(s5);
    cout<<s4<<endl;
    cout<<s5<<endl;
    cout<<s4+s5<<endl;

    string s6 = "India";
    cout<<s6[4]<<endl;

    string s7 = "dfghaskfjwmgnbmefmj";
    s7.clear();
    cout<<s7<<endl;

    string s8 = "abc";
    string s9 = "xyzzzzzzzz";
    cout<<s9.compare(s8)<<endl;
    
}