#include<bits/stdc++.h>
using namespace std;
/* This program is for finding maximum element till ith index of ARRAY*/

int main(){
    int n;
    int mx=INT_MIN;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    
    return 0;
}