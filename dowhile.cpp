#include<iostream>
using namespace std;

int main(){
    // This program is for understanding "do while loop".
    int num;
    cout<<"ENTER NUMBER: \n";
    cin>>num;

    do{
        cout<<num<<endl;
        cin>>num;
    }while (num>0);

    return 0;
}