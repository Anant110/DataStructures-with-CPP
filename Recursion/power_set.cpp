#include<bits/stdc++.h>
using namespace std;

void power(int idx,int arr[],vector<int>& result,int n){
    if(idx>=n){
        for(auto it:result){
            cout<<it;
        }
        if(result.empty()) cout<<"[]";
        cout<<endl;
        return;
    }
    result.push_back(arr[idx]);
    power(idx+1,arr,result,n);
    result.pop_back();
    power(idx+1,arr,result,n);
}

int main(){
    int arr[]={3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> result;
    vector<int> temp;
    power(0,arr,result,n);
}