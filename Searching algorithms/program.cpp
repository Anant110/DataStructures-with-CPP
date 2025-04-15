#include<bits/stdc++.h>
using namespace std;

int binarySearch(int low,int high,int n,int arr[],int target){

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return -1;
}


int main(){
    int arr[]={2,3,4,5,6,7,8,9};
    int n=8;
    int target=8;
    cout<< binarySearch(0,n-1,n,arr,target);
}
