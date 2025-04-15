#include<bits/stdc++.h>
using namespace std;

int func(int n){
    //base condition
    if(n==0){
        return 0;
    }
    
    return n+func(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<func(n);
}