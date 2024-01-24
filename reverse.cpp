#include<iostream>
using namespace std;

int main(){
    /* This program finds reverse of a number. */
    int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    int reverse=0;
    
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse<<endl;

    return 0;
}