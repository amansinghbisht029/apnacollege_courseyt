#include<iostream>
using namespace std;

int main(){
    /* This program prints a pattern(hollow rectangle). */
    int row,col;
    cout<<"Enter number of rows :"<<endl;
    cin>>row;
    cout<<"Enter number of columns :"<<endl;
    cin>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}