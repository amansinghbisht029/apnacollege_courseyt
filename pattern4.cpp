#include<iostream>
using namespace std;

int main(){
    /* This program prints a pattern(half pyramid after 180 degree rotation). */
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}