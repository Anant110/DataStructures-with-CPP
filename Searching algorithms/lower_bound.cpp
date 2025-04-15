#include<bits/stdc++.h>
using namespace std;

int lowerBound(int low,int high,int n,int arr[],int target){
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target) {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}


int main(){
    int arr[]={1,2,3,3,5,8,8,10,10,11};
    int n=10;
    int target=9;
    cout<<lowerBound(0,n-1,n,arr,target);

}
