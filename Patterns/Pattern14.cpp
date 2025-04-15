#include<bits/stdc++.h>
using namespace std;


void printpattern(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    printpattern(n);
}

// A 
// A B 
// A B C 
// A B C D 
// A B C D E 