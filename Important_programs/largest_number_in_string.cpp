#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string largestOddNumber(string num) {
            while(!num.empty() && num.back()%2==0){
                num.pop_back();
            }
            return num;
        }
    };

int main(){
    string num;
    cin>>num;
    Solution s1;
    string res=s1.largestOddNumber(num);
    cout<<res;
}