#include<iostream>
using namespace std;

int main(){
    /* This program is for printing numbers upto 100 which
       are not divisible by 3. */

    for(int i=0;i<=100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}