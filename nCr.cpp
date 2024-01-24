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
    /* This program prints combination of a number using function. */
    int n,r;
    cout<<"Enter two numbers: "<<endl;
    cin>>n>>r;
    
    cout<<"combination is: "<<fact(n)/(fact(r)*fact(n-r))<<endl;
    return 0;
}