#include<bits/stdc++.h>
using namespace std;


/*DFS Traversal of another graph*/

vector<int> dfs(int vis[],vector<int> adj[],int node,vector<int>& result){
    vis[node]=1;

    result.push_back(node);

    for(auto it:adj[node]){
        if(!vis[it]){

            /*Call another number that must ne unvisited*/
            dfs(vis,adj,it,result);
        }
    }

    return result;
}


void joinEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[6];

    joinEdge(adj,0,1);
    joinEdge(adj,0,4);
    joinEdge(adj,1,2);
    joinEdge(adj,1,3);

    int vis[5]={0};
    vector<int> result;

    vector<int> res=dfs(vis,adj,0,result);
    for(auto it:res){
        cout<<it<<" ";
    }
}