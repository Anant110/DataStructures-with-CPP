#include<bits/stdc++.h>
using namespace std;

void combination(int idx,int target,int arr[],int n,vector<int>&ds){
    if(idx==n){
        if(target==0){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //picked condition
    if(arr[idx]<=target){
        ds.push_back(arr[idx]);
        combination(idx,target-arr[idx],arr,n,ds);
        ds.pop_back();
    }
    //not picked condition
    combination(idx+1,target,arr,n,ds);
}

int main(){
    int arr[]={2,3,5};
    vector<int>ds;
    int n=3;
    int target=8;
    combination(0,target,arr,n,ds);
}