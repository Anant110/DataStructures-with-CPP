#include<bits/stdc++.h>
using namespace std;

bool check(int i,string word){
    if(i>=word.size()/2){
        return true;
    }
    if(word[i]!=word[word.size()-i-1]){
        return false;
    }
    return check(i+1,word);
}

int main(){
    string word;
    cin>>word;
    cout<<boolalpha<<check(0,word); //boolalpha is used to print true/false instead of 0/1
    return 0;
}