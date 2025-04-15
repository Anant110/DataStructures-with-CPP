// #include<bits/stdc++.h>
// using namespace std;
// int QS(int arr[],int low,int high){
//     int pivot=arr[low];
//     int i=low;
//     int j=high;
//     while(i<j){
//         while(arr[i]<=pivot && i<high){
//             i++;
//         }
//         while(arr[j]>=pivot && j>low){
//             j--;
//         }
//         if(i<j) swap(arr[i],arr[j]);
//     }
//     swap(arr[low],arr[j]);
//     return j;
// }


// void quick_sort(int arr[],int low,int high){
//     if(low<high){
//         int partition=QS(arr,low,high);
//         quick_sort(arr,low,partition-1);
//         quick_sort(arr,partition+1,high);
//     }
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
//     quick_sort(arr,low,high);
//     for(auto it:arr){
//         cout<<it<<" ";
//     }
// }




#include<bits/stdc++.h>
using namespace std;

int QS(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }

        while(arr[j]>=pivot && j>low){
            j--;
        }

        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void Quick_sort(int arr[],int low,int high){
    if(low<high){
        int partition=QS(arr,low,high);
        Quick_sort(arr,low,partition-1);
        Quick_sort(arr,partition+1,high);
    }
}

int main(){
    int arr[]={12,98,34,56,78,85,11,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    Quick_sort(arr,low,high);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
