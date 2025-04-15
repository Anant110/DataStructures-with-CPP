#include <bits/stdc++.h>
using namespace std;
int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    unordered_map<int,int> mp;

    // for(int i=0;i<arr.size();i++){
    //     mp[arr[i]]++;
    // }
    
    // int mini=INT_MIN;
    // int ans=-1;
    // for(auto m:mp){
    //     if(m.second>INT_MIN){
    //         mini=m.first;
    //         ans=mini;
    //     }
    // }

    int maxAns=0;
    int maxFreq=0;

    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
        maxFreq=max(maxFreq,mp[arr[i]]);
    }
    for(int i=0;i<arr.size();i++){
        if(maxFreq==mp[arr[i]]){
            maxAns=arr[i];
            break;
        }
    }
    return maxAns;
}
int main(){
    vector<int> arr;
    return maximumFrequency(arr,9);
}