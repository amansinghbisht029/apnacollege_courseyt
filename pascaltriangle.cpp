#include<iostream>
#include<math.h>
using namespace std;

int fact(int num){
    int product=1;
    for(int i=2;i<=num;i++){
        product*=i;
    }
    return product;
}
int main(){
    /* This program prints pascal's triangle using function. */
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}