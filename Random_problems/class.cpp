#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,4,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=2;j<n-1;j++){
            int k=max(arr[i],arr[j]);
            int m=max(arr[i+1],arr[j+1]);
        }
    }
}