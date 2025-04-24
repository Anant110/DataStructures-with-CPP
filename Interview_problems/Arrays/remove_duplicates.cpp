#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int cnt=1;
            for(int i=1;i<nums.size();i++){
                if(nums[i]!=nums[i-1]){
                    nums[cnt]=nums[i];
                    cnt++;
                }
            }
            return cnt;
        }
    };


int main(){
    Solution s;
    vector<int> arr={0,0,1,1,1,2,2,3,3,4};
    cout<<s.removeDuplicates(arr)<<endl;
    for(int n:arr){
        cout<<n<<" ";
    }
}