#include<bits/stdc++.h>
using namespace std;

int main(){
    int prev=1,prev2=0;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int curi=prev+prev2;
        prev2=prev;
        prev=curi;
    }
    cout<<prev;

    //this approach reduce the space in O(1);
    //T.C is O(n)
}