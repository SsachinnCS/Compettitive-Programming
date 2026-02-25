#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
vector<int>dp;

int solve(int x,vector<int>& arr){
    if(x==0)return 1;
    if(x<0)return 0;
    if(dp[x]!=-1)return dp[x];

    int ans = 0;
    for(auto a:arr){
        ans = ((ans%mod) +(solve(x-a,arr))%mod)%mod;
    }
    return dp[x]=ans%mod;
}

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    dp.assign(x+1,-1);

    int ans = solve(x,arr);
    //if(ans>=INF)cout<< -1;
     cout<< ans;
}