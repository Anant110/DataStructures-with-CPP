#include<bits/stdc++.h>
using namespace std;
// int cnt=0;
// void fun(){
//     if(cnt==3) return;
//     cout<<cnt;
//     cnt++;
//     fun();
// }
// int main(){
//     fun();
// }

// Print name five times

// int cnt=0;
// void fun(){
//     if(cnt==4){
//         return;
//     }
//     cout<<"Anant"<<endl;
//     cnt++;
//     fun();
// }
// int main(){
//     fun();
// }

// Print n to 1
// void fun(int k){
//     if(k==0) return;
//     cout<<k;
//     fun(k-1);
// }
// int main(){
//     int n=5;
//     fun(n);
// }

// Sum of first n numbers-->parameterized way
// void fun(int num,int sum){
//     if(num<=0){
//         cout<<sum;
//         return;
//     }
//     sum+=num;
//     fun(num-1,sum);
// }
// int main(){
//     int sum=0;
//     int n=10;
//     fun(n,sum);
// }

// Factorial using rescursion
// int fun(int sum){
//     if(sum==0){
//         return 1;
//     }
//     return sum*fun(sum-1);
// }
// int main(){
//     int sum=5;
//     cout<<fun(sum);
// }

// Reverse an array
void fun(int ind,int arr[],int size){
    if(ind>=size){
        return;
    }
    swap(arr[ind],arr[size-1]);
    fun(ind+1,arr,size-1);
}

int main(){
    int arr[]={1,6,7,4,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}






