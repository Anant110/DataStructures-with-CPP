// #include<bits/stdc++.h>
// using namespace std;

// void func(int ind,int arr[],int sum,int mySum,vector<int>& result,int n){
//     if(ind>=n){
//         if(mySum==sum){
//             for(auto it:result){
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }
//     result.push_back(arr[ind]);
//     func(ind+1,arr,sum,mySum+arr[ind],result,n);
//     result.pop_back();
//     func(ind+1,arr,sum,mySum,result,n);
// }

// int main(){
//     int arr[]={1,6,4,3,8,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int sum=11;
//     vector<int> result;
//     func(0,arr,sum,0,result,n);
// }

// If we want only one answer
#include<bits/stdc++.h>
using namespace std;

bool func(int ind,int arr[],int sum,int mySum,vector<int>& result,int n){
    if(ind>=n){
        if(mySum==sum){
            //print only one ans
            for(auto it:result){
                cout<<it<<" ";
            }
            return true;
        }
      return false;
    }

    result.push_back(arr[ind]);
    if(func(ind+1,arr,sum,mySum+arr[ind],result,n)==true){
        return true; //No further calls after this
    }
    result.pop_back();
    if(func(ind+1,arr,sum,mySum,result,n)==true) return true;

    return false;
}

int main(){
    int arr[]={1,6,4,3,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=11;
    vector<int> result;
    func(0,arr,sum,0,result,n);
}