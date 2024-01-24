#include<bits/stdc++.h>
using namespace std;
// This program is to understand pointers.
int main(){
    int a=10;
    int *aptr=&a;

    cout<<*aptr<<endl; //dereference
    *aptr=20; 
    cout<<a<<endl;
    return 0;
}
