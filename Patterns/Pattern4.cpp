#include<bits/stdc++.h>
using namespace std;

void printpattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
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
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 