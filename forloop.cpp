#include<iostream>
using namespace std;

int main(){
    // This program is for understanding "for loop".
    int num;
    cout<<"ENTER NUMBER: \n";
    cin>>num;

    int sum=0;
    for(int counter=1;counter<=num;counter++){
        sum=sum+counter;
    }
    cout<<"SUM of first "<<num<<" numbers is : "<<sum;

    return 0;
}