#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=n;i<=m;i++){
        int num=pow(i,3);
        sum+=num;
    }
    cout<<sum;
}