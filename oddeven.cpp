#include<iostream>
using namespace std;

int main(){
    // This program is about finding odd and even.
    int num;
    cout<<"ENTER NUMBER: \n";
    cin>>num;

    if(num%2==0){
        cout<<"Number is EVEN \n";
    }else{
        cout<<"Number is ODD \n";
    }

    return 0;
}