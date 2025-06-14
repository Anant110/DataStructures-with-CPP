#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool dfs(vector<int>& color, vector<vector<int>>& adj,int node){
            for(auto it:adj[node]){
                if(color[it]==-1){
                    color[it]=!color[node];
                    if(!dfs(color,adj,it)){
                        return false;
                    }
                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
            return true;
        }
    
        bool isBipartite(vector<vector<int>>& graph) {
            int n=graph.size();
            vector<int> color(n,-1);
            vector<vector<int>> adj(n);
            int i=0;
            for(auto it:graph){
                for(auto num:it){
                    adj[i].push_back(num);
                }
                i++;
            }
    
            for(int i=0;i<n;i++){
                if(color[i]==-1){
                    color[i]=0;
                    if(!dfs(color,adj,i)) return false;
                }
            }
            return true;
        }
    };