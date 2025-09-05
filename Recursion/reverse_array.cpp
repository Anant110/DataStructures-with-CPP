// #include<bits/stdc++.h>
// using namespace std;

// void rev(int i,int j,vector<int>& arr){
//     if(i>=j){
//         return;
//     }
//     swap(arr[i],arr[j]);
//     rev(i+1,j-1,arr);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Array before Reverse"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Array After reverse"<<endl;
//     rev(0,n-1,arr);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int t,int ind,int n){
    if(ind>t-1){
        return;
    }
    swap(arr[ind],arr[n-ind-1]);

    func(arr,t,ind+1,n);
}

int main(){
    int arr[]={2,5,7,8,9,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int t=n/2;
    func(arr,t,0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
