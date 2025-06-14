#include<bits/stdc++.h>
using namespace std;


void dfs(int node,vector<int> adj[],stack<int>& st, vector<int>& visited){
    visited[node]=1;
    for(auto it:adj[node]){
        if(!visited[it]){
            dfs(it,adj,st,visited);
        }
    }

    st.push(node);
}

void revDFS(int node,vector<int>& visited, vector<int> transpose[]){
    visited[node]=1;
    cout<<node<<" ";
    for(auto& it:transpose[node]){
        if(!visited[it]){
            revDFS(it,visited,transpose);
        }
    }
}

int main(){
  int n=6;
  vector<int> adj[n];
  adj[1].push_back(2);
  adj[2].push_back(3);
  adj[2].push_back(4);
  adj[3].push_back(1);
  adj[4].push_back(5);

  vector<int> visited(n,0);
  stack<int> st;

  for(int i=1;i<n;i++){
    if(!visited[i]){
        dfs(i,adj,st,visited);
    }
  }

  //reverse the graph
  vector<int> transpose[n];
  for(int i=1;i<n;i++){
    visited[i]=0;
    for(auto it:adj[i]){
        transpose[it].push_back(i);
    }
  }

  while(!st.empty()){
    int k=st.top();
    st.pop();
    if(!visited[k]){
        cout<<"SCC: ";
        revDFS(k,visited,transpose);
        cout<<endl;
    }
  }
}