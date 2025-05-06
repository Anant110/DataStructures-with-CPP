#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& arr,int n,int hrs){
    while(hrs!=0){
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                arr[i]-=1;
            }
            if(arr[i]==0){
                arr[i]=4;
                arr.push_back(9);
            }
        }
        n=arr.size();
        hrs--;
    }
    return arr;
}

int main(){
    vector<int> arr={4,6,2,1,2};

    int n=arr.size();

    int hrs=4;

    vector<int> result=solve(arr,n,hrs);
    for(auto it:result){
        cout<<it<<" ";
    }
}