#include<iostream>
using namespace std;
/* This program is for converting octal number to decimal number. */
int octaltodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter a OCTAL number: "<<endl;
    cin>>n;
    cout<<octaltodecimal(n)<<endl;
    return 0;
}