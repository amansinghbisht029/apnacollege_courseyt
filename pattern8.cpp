#include<iostream>
using namespace std;

int main(){
    /* This program prints a pattern(inverted pattern). */
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}