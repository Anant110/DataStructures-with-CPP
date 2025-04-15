#include<bits/stdc++.h>
using namespace std;

void combination2(int idx,int n,int target,vector<int>&ds,int nums[]){
        if(target==0){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }

    for(int i=idx;i<n;i++){
        if(i>idx && nums[i]==nums[i-1]) continue;
        if(target<nums[i]){
            break;
        }
        ds.push_back(nums[i]);
        combination2(idx+1,n,target-nums[i],ds,nums);
        ds.pop_back();
    }
}
int main(){
    int nums[]={1,2,2,2,5};
    vector<int>ds;
    int n=5;
    int target=5;
    combination2(0,n,target,ds,nums);
}