#include<bits/stdc++.h>
using namespace std;
/* This program is for finding sum of all elements of all subarrays.*/

int main(){
    int n;
    int sum;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}