#include<bits/stdc++.h>
using namespace std;

void rev(int i,int j,vector<int>& arr){
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);
    rev(i+1,j-1,arr);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array before Reverse"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array After reverse"<<endl;
    rev(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}


