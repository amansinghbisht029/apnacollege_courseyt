#include<iostream>
using namespace std;
/* This program is for converting decimal number to octal number. */
int decimaltooctal(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x*=8;
    }    
    x/=8;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=8;
        ans=ans*10 + lastdigit;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a decimal number: "<<endl;
    cin>>n;
    cout<<decimaltooctal(n)<<endl;
    return 0;
}