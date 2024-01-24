#include<bits/stdc++.h>
using namespace std;
// Program to understand recursion in c++

int sum(int n){
    if(n==0){ // or 1
        return 0; // or 1
    }
    int prevsum= sum(n-1);
    return n+prevsum;
}

int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}