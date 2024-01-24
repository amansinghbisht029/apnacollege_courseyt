#include<bits/stdc++.h>
using namespace std;
/* This program is for converting decimal number to hexadecimal number. */
string decimaltohexadecimal(int n){
    string ans="";
    int x=1;
    while(x<=n){
        x*=16;
    }    
    x/=16;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if(lastdigit<=9){
            ans=ans+ to_string(lastdigit);
        }else
        {
            char c='A'+ lastdigit-10;
            ans.push_back(c);
        }
        
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a decimal number: "<<endl;
    cin>>n;
    cout<<decimaltohexadecimal(n)<<endl;
    return 0;
}