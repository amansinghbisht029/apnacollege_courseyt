#include<iostream>
using namespace std;

int main(){
    // This program is for understanding "while loop".
    int num;
    cout<<"ENTER NUMBER: \n";
    cin>>num;

    while(num>0){
        cout<<"This Number is Positive!!! \n";
        cout<<"Please ENTER a NUMBER AGAIN : \n";
        cin>>num;
        cout<<"\n";
    }
    cout<<"This Number is Negative!!! \n";

    return 0;
}