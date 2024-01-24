#include<iostream>
using namespace std;

int main(){
    /* This program prints a pattern(rectangle). */
    int row,col;
    cout<<"Enter number of rows :"<<endl;
    cin>>row;
    cout<<"Enter number of columns :"<<endl;
    cin>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}