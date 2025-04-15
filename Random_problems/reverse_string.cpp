#include<bits/stdc++.h>
using namespace std;

string reversestring(string name){
    stringstream ss(name);
    string temp;
    vector<string> result;
    while(ss >> temp){
        result.push_back(temp);
    }
    reverse(result.begin(),result.end());
    // return result;
    string res;
    for(int i=0;i<result.size();i++){
        res+=result[i];
        if(i<result.size()-1){
            res+=" ";
        }
    }
    return res;
}


int main(){
    string magic="I am Anant";
    string reversed= reversestring(magic);
    cout<<reversed;
}