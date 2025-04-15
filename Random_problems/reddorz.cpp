#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="xxxyyz";
    string news=s;
    unordered_map<char,int> mpp;
    int n=s.size();

    for(int i=0;i<n;i++){
        mpp[s[i]]++;
    }

    while(news.size()!=1){
        for(auto c:mpp){
            news.erase(c.first);
        }
    }

    cout<<news;
}