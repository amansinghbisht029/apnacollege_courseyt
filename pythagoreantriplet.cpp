#include<iostream>
#include<math.h>
using namespace std;
/* This program is for finding a pythagorean triplet. */
bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }else if(a==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }
}
int main(){
    int x,y,z;
    cout<<"Enter three numbers: "<<endl;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"PYTHAGOREAN TRIPLATE!!!"<<endl;
    }else{
        cout<<"NOT A PYTHAGOREAN TRIPLATE!!!"<<endl;
    }
    return 0;
}