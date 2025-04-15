#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    int n=a.size();
    unordered_map<char,int> mpp;

    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }

    string s="";

    for(int i=0;i<n;i++){
        if(mpp.find(a[i])!=mpp.end()){
            s+=a[i];
            s+=to_string(mpp[a[i]]);
            mpp.erase(a[i]);
        }
    }

    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    
    cout<<s;
}