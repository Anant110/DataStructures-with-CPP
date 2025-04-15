#include<bits/stdc++.h>
using namespace std;

vector<string> convert(string str){
    string temp;
    stringstream ss(str);
    vector<string> result;
    while(ss>>temp){
        result.push_back(temp);
    }

    return result;
}

int main(){
    string str="This is the main theme of the raja";
    vector<string> st=convert(str);

    for(auto it:st){
        cout<<it<<" ";
    }
}