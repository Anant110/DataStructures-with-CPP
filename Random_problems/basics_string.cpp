#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int fcnt=0;
    if(n%2!=0) fcnt++;
    int size=(n+1)/2-1;
    int cnt1=0;
    for(int i=0;i<size;i++){
        if(s[i]=='1'){
            cnt1++;
        }
    }
    if(cnt1==size) fcnt++;
    int size1=(n+1)/2-1;
    if(s[size1]=='/') fcnt++;

    int cnt2=0;
    int size2=(n+1/2)+1;
    for(int j=size2;j<n;j++){
        if(s[j]=='2'){
            cnt2++;
        }
    }
    if(cnt2==(n-size2+1)) fcnt++;

    if(fcnt==4) cout<<"Yes";
    else{
        cout<<"No";
    }

}