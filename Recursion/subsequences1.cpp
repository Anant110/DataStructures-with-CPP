#include<bits/stdc++.h>
using namespace std;

void func(int i,vector<int>&ds,int s,int arr[],int n,int sum){
    if(i==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    func(i+1,ds,s,arr,n,sum);
    ds.pop_back();
    s-=arr[i];

    //not picked]
    func(i+1,ds,s,arr,n,sum);


}





int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    func(0,ds,0,arr,n,sum);
}

