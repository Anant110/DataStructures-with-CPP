#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    if(n==1) cout<<0;
    if(n==2) cout<<1;
    long long a=0;
    long long b=1;
    long long sum=1;
    for(int i=3;i<=n;i++){
        long long c=a+b;
        a=b;
        b=c;
        sum+=c;
    }
    if(n>2) cout<<sum;
}