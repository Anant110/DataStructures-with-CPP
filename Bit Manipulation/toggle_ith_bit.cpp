#include<bits/stdc++.h>
using namespace std;
int togglebit(int n,int k){
    int m= (n^(1<<k));
    return m;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<togglebit(n,k);
}