#include<bits/stdc++.h>
using namespace std;

vector<int> maximum_window(int arr[],int n,int k){
    deque<int> dq;
    vector<int> result;
    for(int i=0;i<n;i++){
        if(!dq.empty() && dq.front()==i-k){
            dq.pop_front();
        }

        while(!dq.empty() && arr[dq.back()]<arr[i]){
            dq.pop_back();
        }

        dq.push_back(i);

        if(i>=k-1) result.push_back(arr[dq.front()]);

    }

    return result;
}

int main(){
    int arr[]={1,2,3,1,4,5,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    vector<int> ans=maximum_window(arr,n,k);
    for(auto it:ans){
        cout<<it<<" ";
    }
}