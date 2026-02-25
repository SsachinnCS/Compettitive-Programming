#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
vector<int>dp;

int solve(int x,vector<int>& arr){
    if(x==0)return 0;
    if(x<0)return INF;
    if(dp[x]!=-1)return dp[x];

    int ans = INT_MAX;
    for(auto a:arr){
        ans = min(ans,1+(solve(x-a,arr)));
    }
    return dp[x]=ans;
}

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    dp.assign(x+1,-1);

    int ans = solve(x,arr);
    if(ans>=INF)cout<< -1;
    else cout<< ans;
}