#include<iostream>
using namespace std;

int main(){
    /* This program prints a pattern(floyd's triangle). */
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int count=1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                cout<<count<<" ";
                count++;
        }
        cout<<endl;
    }
    return 0;
}