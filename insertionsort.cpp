#include<bits/stdc++.h>
using namespace std;
/* This program is for arranging elements of array in accending order using insertion sort. */

void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
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
    insertionsort(arr,n);
    return 0;
}