#include<iostream>
using namespace std;

int main(){
    // This program is about finding max of three numbers.
    int num1,num2,num3;
    cout<<"ENTER THREE NUMBERS : \n";
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<"MAXIMUM Number is : "<<num1;
        }else{
            cout<<"MAXIMUM Number is : "<<num3;
        }
    }else if(num2>num3){
            cout<<"MAXIMUM Number is : "<<num2;
        }else{
            cout<<"MAXIMUM Number is : "<<num3;
        }

    return 0;
}