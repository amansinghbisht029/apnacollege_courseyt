#include<iostream>
using namespace std;

int main(){
    // This program is for understanding if/else concept.
    int savings;
    cin>>savings;

    if(savings>5000){
        if(savings>10000){
            cout<<"Road Trip With Neha \n";
        }else{
            cout<<"Shopping With Neha \n";
        }  
    }else if(savings>2000){
        cout<<"Rashmi \n";
    }else{
        cout<<"Friends \n";
    }

    return 0;
}