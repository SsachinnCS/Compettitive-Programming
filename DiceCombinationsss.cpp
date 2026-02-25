#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000007;
vector<int>dp;
int solve(int n){
    if(n==0)return 1;
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
    int ans =0;
    for(int i=1;i<=6;i++){ans=(ans%mod +solve(n-i)%mod)%mod;}
    return dp[n]=ans%mod;
}

int main(){

    int n;
    cin>>n;
    dp.assign(n+1,-1);
    cout<<solve(n);
}