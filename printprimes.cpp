#include<iostream>
using namespace std;

int main(){
    /* This program is for printing prime numbers between two given numbers. */
    int num1,num2;
    cout<<"Enter Two Numbers:"<<endl;
    cin>>num1>>num2;
    
    for(int i=num1;i<=num2;i++){
        int j;
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}