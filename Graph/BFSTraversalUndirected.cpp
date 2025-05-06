#include<bits/stdc++.h>
using namespace std;

//BFS traversal of undirected graph
class Solution{
public:
    vector<int> bfsTraversal(int V,vector<int> adj[]){
        int vis[V]={0};
        queue<int> qu;
        qu.push(0);
        vis[0]=1;

        vector<int> result;
        
        while(!qu.empty()){

            int node=qu.front();
            qu.pop();

            result.push_back(node);

            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    qu.push(it);
                }
            }
        }
        return result;
    }
};


void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


int main(){
    vector<int> adj[6];

    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);

    Solution obj;
    vector<int> res=obj.bfsTraversal(5,adj);

    for(auto it:res){
        cout<<it<<" ";
    }

    
}