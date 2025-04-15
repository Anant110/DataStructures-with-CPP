#include<bits/stdc++.h>
using namespace std;

void merge(int low,int mid,int high,int arr[]){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mS(int low,int high,int arr[]){
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mS(low,mid,arr);
    mS(mid+1,high,arr);
    merge(low,mid,high,arr);
}

int main(){
    int arr[]={1,6,8,3,5,9,30};
    int n=7;
    mS(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


