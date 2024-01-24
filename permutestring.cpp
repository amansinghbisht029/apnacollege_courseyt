#include<bits/stdc++.h>
using namespace std;
void peramutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        peramutation(ros,ans+ch);
    }
}
int main(){
    peramutation("ABC","");
    cout<<endl;
    return 0;
}