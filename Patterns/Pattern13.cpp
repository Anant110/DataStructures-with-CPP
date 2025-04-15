#include<bits/stdc++.h>
using namespace std;

int start=1;
void printpattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            start+=1;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printpattern(n);
}