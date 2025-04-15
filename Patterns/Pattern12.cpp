#include<bits/stdc++.h>
using namespace std;

int start;
void printpattern(int n){
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        // space
        for(int j=1;j<=(2*n-2*i);j++){
            cout<<" ";
        }

        // numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;       
    }
}

int main(){
    int n;
    cin>>n;
    printpattern(n);
}

// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
// 123456654321