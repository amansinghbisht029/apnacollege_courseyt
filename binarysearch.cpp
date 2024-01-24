#include<bits/stdc++.h>
using namespace std;
/* This program is for finding index of an element given in ARRAY provided 
elements are in accending order.*/

int binarysearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return -1;

}
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in accending order: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key number: ";
    cin>>key;
    cout<<"The index of key number is: "<<binarysearch(arr,n,key);
    return 0;
}