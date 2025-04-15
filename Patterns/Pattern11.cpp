#include<bits/stdc++.h>
using namespace std;

int start;
void printpattern(int n){
    for(int i=1;i<=n;i++){
        if(i%2 ==0) start=0;
        else start=1;
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printpattern(n);
}

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1