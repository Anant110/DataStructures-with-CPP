#include<bits/stdc++.h>
using namespace std;
// sum of cube of elements in the range from n to m

int main(){
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=n;i<=m;i++){
        int k=pow(i,3);
        sum+=k;
    }

    cout<<sum;
}
