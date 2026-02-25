#include<bits/stdc++.h>

using namespace std;

//DSU function
class DisJointSet{

    vector<int>rank,parent;

    public:

    //constructor
    DisJointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++)parent[i]=i;
    }

    int findUnionParent(int node){
        if(node==parent[node])return node;
        return parent[node]=findUnionParent(parent[node]);
    }

    void UnionbyRank(int u,int v){
        int ulp_u = findUnionParent(u);
        int ulp_v = findUnionParent(v);

        if(ulp_u == ulp_v)return;

        if(rank[ulp_u] < rank[ulp_v])parent[ulp_u]=ulp_v;
        else if(rank[ulp_v] < rank[ulp_u])parent[ulp_v]=ulp_u;
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
        
    }
};




int main(){

    DisJointSet ds(7);

    ds.UnionbyRank(1,2);
    ds.UnionbyRank(2,3);
    ds.UnionbyRank(4,5);
    ds.UnionbyRank(6,7);
    ds.UnionbyRank(5,6);

    if(ds.findUnionParent(3) == ds.findUnionParent(5))cout<<"same"<<endl;
    else cout<<"NOt same"<<endl;
    ds.UnionbyRank(3,5);
    if(ds.findUnionParent(3) == ds.findUnionParent(5))cout<<"same"<<endl;
    else cout<<"NOt same"<<endl;
    return 0;
}