#include<bits/stdc++.h>
using namespace std;

bool func(int ind, string& s){
    if(ind>=s.size()/2) return true;

    if(s[ind]!=s[s.size()-ind-1]){
        return false;
    }

    return true;
}

int main(){
    string s;
    cin>>s;
    if(func(0,s)){
        cout<<"Yes it is!";
    }

    else{
        cout<<"No is is not!";
    }
}