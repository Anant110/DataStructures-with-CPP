#include <bits/stdc++.h> 
using namespace std;

void DFStopological(stack<int>& st,vector<int> adj[],vector<int>& vis,int node){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            DFStopological(st,adj,vis,it);
        }
    }
    st.push(node);
}


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int> adj[v];

    for(auto it:edges){
        int u=it[0];
        int v=it[1];
        adj[u].push_back(v);
    }

    vector<int> vis(v,0);
    stack<int> st;

    for(int i=0;i<v;i++){
        if(!vis[i]){
            DFStopological(st,adj,vis,i);
        }
    }

    vector<int> result(v);
    int i=0;
    while(!st.empty()){
        result[i++]=st.top();
        st.pop();
    }

    return result;

}

int main(){
    vector<vector<int>> edges={{0,1},{0,2}};
    int v=3;
    int e=2;

    vector<int> res=topologicalSort(edges,v,e);

    for(auto it: res){
        cout<<it<<" ";
    }
}