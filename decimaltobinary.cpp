#include<iostream>
using namespace std;
/* This program is for converting decimal number to binary number. */
int decimaltobinary(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x*=2;
    }    
    x/=2;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        ans=ans*10 + lastdigit;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a decimal number: "<<endl;
    cin>>n;
    cout<<decimaltobinary(n)<<endl;
    return 0;
}