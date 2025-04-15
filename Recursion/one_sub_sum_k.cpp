//if only one element is printes in subsequence whose sum is k
#include<bits/stdc++.h>
using namespace std;

bool func(int i,vector<int>&ds,int s,int arr[],int n,int sum){
    if(i==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    if(func(i+1,ds,s,arr,n,sum)==true){
        return true;
    }
    ds.pop_back();
    s-=arr[i];

    //not picked]
    if(func(i+1,ds,s,arr,n,sum)==true){
        return true;
    }
    return false;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    func(0,ds,0,arr,n,sum);
}

