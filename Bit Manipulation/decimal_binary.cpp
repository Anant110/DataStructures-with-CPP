#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    while(n!=0){
        int k=n%2;
        arr.push_back(k);
        n/=2;
    }
    reverse(arr.begin(),arr.end());
    for(auto x:arr){
        cout<<x;
    }
}