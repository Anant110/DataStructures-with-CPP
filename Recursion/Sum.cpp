#include<bits/stdc++.h>
using namespace std;

int sum=0;
int func(int i,int n,int sum){
    if(i>n){
        return sum;
    }
    sum+=i;
    return func(i+1,n,sum);
}

int main(){
    int n;
    cin>>n;
    func(1,n,0);

    return 0;
}