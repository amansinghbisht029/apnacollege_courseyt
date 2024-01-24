// #include<bits/stdc++.h>
// using namespace std;
// void dec(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     dec(n);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    inc(n);
    return 0;
}