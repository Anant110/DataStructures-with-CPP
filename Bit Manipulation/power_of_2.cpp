#include<bits/stdc++.h>
using namespace std;


int main(){
    int a;
    cin>>a;
    // int m=__builtin_popcount(a);
    // if(m==1){
    //     cout<<"yes"<<endl;
    // }
    // else{
    //     cout<<"no"<<endl;
    // }

    int m=(a & (a-1));
    if(m==0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}