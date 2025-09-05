#include<bits/stdc++.h>
using namespace std;

// void func(int n,int& sum,int ind){
//     if(ind>n) return;
//     sum+=ind;
//     func(n,sum,ind+1);
// }

// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     func(n,sum,1);

//     cout<<sum;
// }

//Functional recursion

int fun(int n){
    if(n==0) return 0;

    return n+fun(n-1);
}

int main(){
    int n;
    cin>>n;
    
    cout<<fun(n);
}

