#include<iostream>
using namespace std;

//matrix representation

int main(){
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    //space-->N*N
}


#include<bits/stdc++.h>
using namespace std;

//list representation
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //space-->(2E)

    //if directed graph
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //only u-->v
        adj[u].push_back(v);
    }
    //space-->(E)

}