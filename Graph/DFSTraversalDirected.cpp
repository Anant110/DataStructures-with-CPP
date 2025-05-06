#include<bits/stdc++.h>
using namespace std;

bool dfs(int vis[],int dfsVis[],vector<int> adj[],int node){
    vis[node]=1;
    dfsVis[node]=1;

    for(auto it:adj[node]){
        if(!vis[it]){
            if(dfs(vis,dfsVis,adj,it)) return true;
        }
        else if(dfsVis[it]){
            return true;
        }
    }

    dfsVis[node]=0;
    return false;
}

void joinEdge(vector<int> adj[],int v,int u){
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[10];

    joinEdge(adj,1,2);
    joinEdge(adj,2,3);
    joinEdge(adj,3,6);
    joinEdge(adj,3,4);
    joinEdge(adj,4,5);
    joinEdge(adj,6,5);
    joinEdge(adj,3,6);
    joinEdge(adj,7,2);
    joinEdge(adj,7,8);
    joinEdge(adj,8,9);
    joinEdge(adj,9,7);

    int vis[10],dfsVis[10];

    for(int i=1;i<10;i++){
        if(!vis[i]){
            if(dfs(vis,dfsVis,adj,i)){
                cout<<"Graph has Cycle"<<endl;
                return 0;
            }
        }
    }

    cout<<"graph has no Cycle"<<endl;
}