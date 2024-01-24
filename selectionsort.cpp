#include<bits/stdc++.h>
using namespace std;
/* This program is for arranging elements of array in accending order using selection sort. */

void selectionsort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Numbers for array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Numbers in accending order: ";
    selectionsort(arr,n);
    return 0;
}