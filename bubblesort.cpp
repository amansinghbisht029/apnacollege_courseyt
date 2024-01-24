#include<bits/stdc++.h>
using namespace std;
/* This program is for arranging elements of array in accending order using bubble sort. */

void bubblesort(int arr[], int n){
    int counter=0;
    while(counter<n-1){
        for(int i=0;i<n-counter-1;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
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
    bubblesort(arr,n);
    return 0;
}