#include<bits/stdc++.h>
using namespace std;
// Program to find the unique number.
int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum;
}
int main(){
    int arr[]={1,2,3,4,1,2,3};
    cout<<unique(arr,7);
    return 0;
}