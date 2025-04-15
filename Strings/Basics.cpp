#include<bits/stdc++.h>
using namespace std;

vector<string> change(string str){

    string temp;
    stringstream ss(str);
    vector<string> result;

    while(ss>>temp){
        if(ispunct(temp.back())) temp.pop_back();
        result.push_back(temp);
    }

    return result;
}

int main(){
    string str=" This is pain test.Gain Test Test test gain gain.";
    vector<string> res=change(str);
    map<string,int> mpp;

    for(int i=0;i<res.size();i++){

        mpp[res[i]]++;
    }

    for(auto it:mpp){
        if(it.second>=2){
            cout<<it.first;
            break;
        }
    }
}