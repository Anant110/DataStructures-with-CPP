#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size();
            int m=matrix[0].size();

            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }

            for(int i=0;i<n;i++){
                reverse(matrix[i].begin(),matrix[i].end());
            }
        }
    };

int main(){
    Solution s;
    vector<vector<int>> matrix={
                                {1,2,3},
                                {4,5,6},
                                {7,8,9}
                           };
    s.rotate(matrix);
    
    int n=matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}