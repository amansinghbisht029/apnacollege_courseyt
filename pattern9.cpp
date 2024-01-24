#include<iostream>
using namespace std;

int main(){
    /* This program prints a pattern(0-1 Pattern). */
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((j+i)%2==0){
                cout<<1<<" ";
            }else{
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}