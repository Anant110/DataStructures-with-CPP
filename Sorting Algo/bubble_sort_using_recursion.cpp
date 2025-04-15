// #include<iostream>
// using namespace std;

// void sortarray(int *arr,int n){
//     if(n==0 || n==1){
//         return;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     sortarray(arr,n-1);
// }

// int main(){
//     int arr[6]={34,89,12,32,80,90};
//     sortarray(arr,6);
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[],int n){

    if(n==1) return;


    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    Bubble_sort(arr,n-1);
}

int main(){
    int arr[]={12,98,34,56,78,85,11,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    Bubble_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}