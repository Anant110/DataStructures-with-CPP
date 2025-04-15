#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=10;i++){
        sum+=n*i;
    }
    cout<<sum;

}