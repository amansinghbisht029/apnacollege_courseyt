#include<bits/stdc++.h>
using namespace std;
// Program to find the 2 unique numbers.
int setBit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
void unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}
int main(){
    int arr[]={1,2,3,5,7,1,2,3};
    unique(arr,8);
    return 0;
}