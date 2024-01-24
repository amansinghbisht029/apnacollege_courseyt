#include<iostream>
#include<math.h>
using namespace std;

int main(){
    /* This program finds wheather number is armstrong or not. */
    int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    float sum=0;
    int originaln=n;
    
    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<"The number is armstrong number."<<endl;
    }
    else{
        cout<<"The number is not armstrong number."<<endl;
    }

    return 0;
}