#include<bits/stdc++.h>
using namespace std;
/* This program is for understanding 2D ARRAY by searching a matrix element. */

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    int x;
    cin>>x;
    cout<<endl;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<"Cordinates of elements: "<<i<<","<<j<<endl;
                flag=true;
            }
        }
        cout<<endl;
    }
    if(flag==true){
        cout<<"Element found!!!"<<endl;
    }else{
        cout<<"Element not found!!!"<<endl;
    }
    return 0;
}