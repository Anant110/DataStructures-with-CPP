#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> uniqueRow(vector<vector<int>> &matrix, int n, int m)
{
      // Write Your code here.
      map<vector<int>,int> mpp;
      vector<vector<int>> result;
      for(int i=0;i<n;i++){
            vector<int> temp=matrix[i];
            if(mpp.find(temp)==mpp.end()){
                  result.push_back(temp);
            }
            mpp[matrix[i]]++;
      }

      return result;
}

int main(){
    vector<vector<int>> matrix={{1, 1, 1, 0, 0},{0, 1, 0, 0, 1},{1, 0, 1, 1, 0},{0, 1, 0, 0, 1},{1, 1, 1, 0, 0}};
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> res=uniqueRow(matrix,n,  m);
    for(auto it:res){
        for(auto curr:it){
            cout<<curr<<" ";
        }
        cout<<endl;
    }
}