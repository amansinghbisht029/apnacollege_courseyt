#include<iostream>
using namespace std;

int main(){
    /* This program is for finding prime number. */
    int num;
    cout<<"Enter A Number:"<<endl;
    cin>>num;
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            cout<<"NOT PRIME!!!";
            break;
        }
    }
    if(i==num){
        cout<<"PRIME!!!";
    }

    return 0;
}