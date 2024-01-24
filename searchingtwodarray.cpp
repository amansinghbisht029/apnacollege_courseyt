#include<bits/stdc++.h>
using namespace std;
/* This program is for understanding searching in 2D array. */
//for sorted rows and columns.
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    bool found=false;
    int r=0,c=m-1;
    while(r<n && c>=0){
        if(arr[r][c]==target){
            found=true;
        }
        if(arr[r][c]>target){
            c--;
        }else{
            r++;
        }
    }
    if(found==true){
        cout<<"ELEMENT IS FOUND!"<<endl;
    }else{
        cout<<"ELEMENT IS NOT FOUND! "<<endl;
    }
    return 0;
}