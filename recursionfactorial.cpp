#include<bits/stdc++.h>
using namespace std;
// Program for factorial calculation using recursion.

int factorial(int n){
    if(n==0){
        return 1;
    }
    int prevfact= factorial(n-1);
    return n*prevfact;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}