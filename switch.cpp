#include<bits/stdc++.h>
using namespace std;

int main(){
    /* This program is for usage of switch case. */
    char press;
    cout<<"Enter a letter(a,b,c,d) : \n";
    cin>>press;

    switch (press)
    {
        case 'a':
        cout<<"Yo"<<endl;
        break;
        case 'b':
        cout<<"Hey"<<endl;
        break;
        case 'c':
        cout<<"nice"<<endl;
        break;
        case 'd':
        cout<<"love"<<endl;
        break;
        default:
        cout<<"I am still Learning!!!"<<endl;
        break;
    }

    return 0;
}