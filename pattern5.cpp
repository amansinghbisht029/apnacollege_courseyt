#include<iostream>
using namespace std;

int main(){
    /* This program prints a pattern(half pyramid using numbers). */
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}