#include<bits/stdc++.h>
using namespace std;
// Program for fibonacci calculation using recursion.

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}