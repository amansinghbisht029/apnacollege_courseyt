#include<bits/stdc++.h>
using namespace std;
/* This program is for finding index of an element given in ARRAY */

int linearsearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key number: ";
    cin>>key;
    cout<<"The index of key number is: "<<linearsearch(arr,n,key);
    return 0;
}