#include<bits/stdc++.h>
using namespace std;
/* This program is for finding maximum and minimum element given in ARRAY */

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<"MAXIMUM NUMBER: "<<maxno<<" MINIMUM NUMBER: "<<minno<<endl;
    return 0;
}