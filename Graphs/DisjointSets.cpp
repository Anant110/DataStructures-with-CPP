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

    //return self parent node
    int findUnionNode(int node){
        if(node==parent[node]) return node;

        return parent[node]=findUnionNode(parent[node]);
    }

    //path compression
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

int main(){
    Disjoint ds(7);
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);

    if(ds.findUnionNode(3)==ds.findUnionNode(7)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

    ds.unionByRank(3,7);
    if(ds.findUnionNode(3)==ds.findUnionNode(7)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

}