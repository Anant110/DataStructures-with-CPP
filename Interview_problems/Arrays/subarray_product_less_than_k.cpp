#include<bits/stdc++.h>
using namespace std;

int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int i=0;
    int j=0;
    int n=nums.size();
    int prod=1;
    int cnt=0;
    while(j<n){
        prod*=nums[j];
        while(i<n && i<j && prod>=k)
        {
            prod/=nums[i];
            i++;
        }
        if(prod<k)
        {
            cnt+=j-i+1;
        }
        j++;
    }
    return cnt;
}

int main(){
    vector<int> arr={1, 6, 2, 3, 2, 1};
    int k=12;
    int number=numSubarrayProductLessThanK(arr,k);
    cout<<number;
}