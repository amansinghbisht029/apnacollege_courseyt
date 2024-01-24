#include<bits/stdc++.h>
using namespace std;
// This program is to make biggest number from a number string.
int main(){
    string s="1084986475";
    sort(s.begin(),s.end(),greater<int>()); //greater<char>
    cout<<s<<endl;
    return 0;
}