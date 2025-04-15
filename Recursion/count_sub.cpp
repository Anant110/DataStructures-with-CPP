//Count number of subsequences in the array
#include<bits/stdc++.h>
using namespace std;

int func(int i,int s,int arr[],int n,int sum){
    if(i==n){
        if(s==sum){
            return 1;
        }
        else return 0;;
    }

    s+=arr[i];

    int l=func(i+1,s,arr,n,sum);
 
    s-=arr[i];

    //not picked
    int r=func(i+1,s,arr,n,sum);

    return l+r;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    cout<<func(0,0,arr,n,sum);
}

