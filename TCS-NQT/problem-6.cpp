#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long ans=0;

    while(n!=0){
        ans=ans*10+(n%2);
        n/=2;
    }

    cout<<ans;
}