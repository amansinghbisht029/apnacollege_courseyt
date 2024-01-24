#include<iostream>
#include<math.h>
using namespace std;

void fact(int num){
    int product=1;
    for(int i=2;i<=num;i++){
        product*=i;
    }
    cout<<product;
    return;
}
int main(){
    /* This program prints factorial of a number using function. */
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    fact(n);  
    return 0;
}