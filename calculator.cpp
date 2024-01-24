#include<iostream>
using namespace std;

int main(){
    /* This program is a basic calculator. */
    int num1,num2;
    cout<<"Enter Two Numbers : \n";
    cin>>num1>>num2;
    char op;
    cout<<"Enter an operator(+,-,/,*) : \n";
    cin>>op;

    switch (op)
    {
        case '+':
        cout<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1-num2<<endl;
        break;
        case '/':
        cout<<num1/num2<<endl;
        break;
        case '*':
        cout<<num1*num2<<endl;
        break;

        default:
        cout<<"You entered wrong operator!!!"<<endl;
        break;
    }

    return 0;
}