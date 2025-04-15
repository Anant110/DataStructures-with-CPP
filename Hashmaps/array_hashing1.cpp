#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    //precompute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        //when the hash array s has only small characters
        hash[s[i]-'a']++;
        
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;

        //fetch
        cout<<hash[ch-'a']<<endl;
    }
}