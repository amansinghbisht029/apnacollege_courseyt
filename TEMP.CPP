#include<bits/stdc++.h>
using namespace std;
// This program is to understand use of pointers in the function.


int main(){
    int a=2, b;
    b=a++ + ++a + a + a++;
    cout<<b<<a;
    return 0;
}
