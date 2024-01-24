#include<iostream>
#include<math.h>
using namespace std;

int main(){
    /* This program finds wheather a number is prime or not. */
    int n;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    bool flag=0;
    
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"NON-PRIME"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"PRIME"<<endl;
    }
    return 0;
}