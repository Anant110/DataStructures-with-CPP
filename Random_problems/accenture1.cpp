#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,x;
    cin>>a>>b>>x;
    int cnt=0;
    for(int i=a;i<=b;i++){
        int n=i;
        while(n!=0){
            int k=n%10;
            if(k==x){
                cnt++;
            }
            n=n/10;
        }
    }
    cout<<cnt<<endl;
    return 0;
}