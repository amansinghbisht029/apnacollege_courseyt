#include<iostream>
using namespace std;

int main(){
    /* This program prints a pattern(palindromic pattern). */
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    
    
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}