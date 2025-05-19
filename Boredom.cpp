#include <bits/stdc++.h>
using namespace std;

#define optimize() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

int main() {
    optimize();

    int n;
    cin>>n;

    vector<ll> dp(1e5 + 5, 0), f(1e5 + 5, 0);

    int mx = 0,a;
    for(int i=0;i<n;i++){
        cin>>a;
        f[a]++;
        mx=max(mx,a);
    }

    dp[0]=0;
    dp[1]=f[1]*1;

    for(int i=2;i<=mx;i++){
        dp[i]=max(dp[i-1],dp[i-2]+f[i]*i);
    }
    cout<<dp[mx]<<endl;
    return 0;

}