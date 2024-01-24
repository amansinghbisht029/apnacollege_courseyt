#include<bits/stdc++.h>
using namespace std;
// This program is to make all letters of same case in string.
int main(){
    // string str="akfdkjcn";
    // // convert all to uppercase
    // for(int i=0;i<str.length();i++){
    //     if(str[i]>='a' && str[i]<='z')
    //     str[i]-=32;
    // }
    // cout<<str<<endl;
    // // convert all to lowercase
    // for(int i=0;i<str.length();i++){
    //     if(str[i]>='A' && str[i]<='z')
    //     str[i]+=32;
    // }
    // cout<<str<<endl;
    string s="fjganbxksa";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}