#include<bits/stdc++.h>
using namespace std;

void func(int idx,int arr[],vector<int>&ds,int sum,int n){
    if(idx==n){
        ds.push_back(sum);
        return;
    }
    //pick the element
    func(idx+1,arr,ds,sum+arr[idx],n);

    //dont pick it
    func(idx,arr,ds,sum,n);
}
vector<int> subset(int arr[],int n){
    vector<int>ds;
    func(0,arr,ds,0,n);
    return ds;
}

int main() {
    int arr[] = {3, 2, 1};
    int n = 3;
    vector<int> ds = subset(arr, n);
    for(int i = 0; i < ds.size(); i++) {
        cout << ds[i] << " ";
    }
    return 0;
}

