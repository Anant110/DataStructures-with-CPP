#include<bits/stdc++.h>
using namespace std;

void printpattern(int n){
    for(int i=n;i>=1;i--){
        for(int j=0;j<i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printpattern(n);
}

// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 