#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    int right[n],wrong[m];
    int minele=INT_MAX,maxle=INT_MIN,limit=INT_MAX;

    for(int i =0;i<n;i++){
        cin>>right[i];
        minele = min(minele,right[i]);
        maxle=max(maxle,right[i]);
        
    }


    for(int i =0;i<m;i++){
        cin>>wrong[i];
        limit=min(limit,wrong[i]);
        
    }
    int ans = max(2*minele,maxle);
    if(ans<limit)cout<<ans;
    else cout<<"-1";
    return 0;
}