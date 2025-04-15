#include<bits/stdc++.h>
using namespace std;

void Palindrome(int n){
    int a=0;
    cout<<a<<" ";
    int b=1;
    cout<<b<<" ";
    for(int i=0;i<n-2;i++){
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    Palindrome(n);
}