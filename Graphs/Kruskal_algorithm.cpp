#include<bits/stdc++.h>
using namespace std;

class Disjoint{
    vector<int> rank,parent;
public:
    Disjoint(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findUnionNode(int node){
        if(node==parent[node]) return node;

        return parent[node=findUnionNode(parent[node])];
    }

    void unionByRank(int u,int v){
        int ult_u=findUnionNode(u);
        int ult_v=findUnionNode(v);
        if(ult_u==ult_v) return;
        else if(rank[ult_u]>rank[ult_v]){
            parent[ult_v]=ult_u;
        }
        else if(rank[ult_v]>rank[ult_u]){
            parent[ult_u]=ult_v;
        }
        else{
            parent[ult_v]=ult_u;
            rank[ult_u]++;
        }
    }


};

int primsAlgorithm(vector<vector<int>>& edges,int V){
    vector<pair<int,pair<int,int>>> adj;

    for(auto it:edges){
        int wt=it[2];
        int u=it[0];
        int v=it[1];

        adj.push_back({wt,{u,v}});
    }

    sort(adj.begin(),adj.end());
    int sum=0;

    Disjoint ds(V);

    for(auto it:adj){
        int wt=it.first;
        int a=it.second.first;
        int b=it.second.second;
        if(ds.findUnionNode(a)!=ds.findUnionNode(b)){
            sum+=wt;
            ds.unionByRank(a,b);
        }
    }

    return sum;
}




int main(){
    vector<vector<int>> edges={{0,1,5},{1,2,3},{0,2,1}};
    int V=3;

    int sum=primsAlgorithm(edges,V);

    cout<<sum;

}