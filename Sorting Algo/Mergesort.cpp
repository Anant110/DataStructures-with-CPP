// #include<bits/stdc++.h>
// using namespace std;

// void merge_sort(int arr[],int low,int mid,int high){
//     int i=low;
//     int j=mid+1;
//     vector<int> result;
//     while(i<=mid && j<=high){
//         if(arr[i]<arr[j]){
//             result.push_back(arr[i]);
//             i++;
//         }
//         else {
//             result.push_back(arr[j]);
//             j++;
//         }
//     }
//     while(j<=high){
//         result.push_back(arr[j]);
//         j++;
//     }
//     while(i<=mid){
//         result.push_back(arr[i]);
//         i++;
//     }
//     for(int i=low;i<=high;i++){
//         arr[i]=result[i-low];
//     }
// }

// void MS(int arr[],int low,int high){
//     if(low>=high) return;
//     int mid=(low+high)/2;
//     MS(arr,low,mid);
//     MS(arr,mid+1,high);
//     merge_sort(arr,low,mid,high);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int low=0;
//     int high=n-1;
//     MS(arr,low,high);
//     for(auto it:arr){
//         cout<<it<<" ";
//     }
// }


