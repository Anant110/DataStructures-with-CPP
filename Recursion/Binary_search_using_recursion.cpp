#include<iostream>
using namespace std;

bool Binarysearch(int *arr,int s,int e,int k){
    if(s>e){
        return false;
    }

    int mid=s+(e-s)/2;

    if(arr[mid]==k)
        return true;

    if(arr[mid]<k){
        return Binarysearch(arr,mid+1,e,k);

    }
    else{
        return Binarysearch(arr,s,mid-1,k);
    }
}


int main(){
    int arr[5]={12,45,23,67,89};
    int size=5;
    int key=80;

    bool ans=Binarysearch(arr,0,5,key);

    if(ans){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
}