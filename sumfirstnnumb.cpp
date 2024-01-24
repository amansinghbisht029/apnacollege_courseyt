#include<iostream>
using namespace std;
/* This program is for calculating sum of first n natural numbers. */
int sum(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}