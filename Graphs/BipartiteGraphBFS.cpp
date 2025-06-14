#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool check(vector<int>& color,vector<vector<int>>& graph,int node){
          
            queue<int> qu;
            qu.push(node);
            color[node]=0;
    
            while(!qu.empty()){
                int num=qu.front();
                qu.pop();
    
                for(auto it:graph[num]){
                    if(color[it]==-1){
                        color[it]=!color[num];
                        qu.push(it);
                    }
                    else if(color[it]==color[num]){
                        return false;
                    }
    
                }
            }
            return true;
        }
        bool isBipartite(vector<vector<int>>& graph) {
            int n=graph.size();
            vector<int> color(n,-1);
    
            for(int i=0;i<n;i++){
                if(color[i]==-1 && check(color,graph,i)==false){
                    return false;
                }
            }
    
            return true;
        }
    };

int main(){
    
}