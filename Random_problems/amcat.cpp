#include<bits/stdtr1c++.h>

using namespace std;

int main(){
    int arr[]={2,3,1,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int k=arr[i];
        swap(arr[k],arr[i]);
        // arr[k]=k;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}