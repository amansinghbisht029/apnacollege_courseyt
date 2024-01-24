#include<bits/stdc++.h>
using namespace std;
// Program to find wheather a number is a function of 2.
int ispowerof2(int n){
    return (n && !(n & n-1));
}
int main(){
    cout<<ispowerof2(14)<<endl;
    return 0;
}