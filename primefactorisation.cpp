#include<bits/stdc++.h>
using namespace std;
// Program to do prime factorisation sieve of eratosthenes.
void primefactor(int n){
    int spf[100]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
int main(){
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}