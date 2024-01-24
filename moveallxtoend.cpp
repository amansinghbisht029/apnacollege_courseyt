#include<bits/stdc++.h>
using namespace std;
string moveAllX(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveAllX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return (ch+ans);
}
int main(){
    cout<<moveAllX("axxbdkacllfxlrx")<<endl;
    return 0;
}