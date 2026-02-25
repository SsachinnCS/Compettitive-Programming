#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];

    vector<int> dp(x + 1, 0);
    dp[0] = 1;  // one way to make sum 0

    // iterate over coins first (ensures combinations, not permutations)
    for (int coin : coins) {
        for (int i = coin; i <= x; i++) {
            dp[i] = (dp[i] + dp[i - coin]) % MOD;
        }
    }

    cout << dp[x] << "\n";
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;
// int n,x;
// const int mod = 1e9 + 7;
// #define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// vector<vector<int>>dp;
// vector<int>coins;


// int solve(int idx,int target){
//     if(target==0)return 1;
//     if(idx==n)return 0;

//     if(dp[idx][target]!=-1)return dp[idx][target];

//     int ans = 0;
//     ans = ((ans%mod) + (solve(idx+1,target))%mod)%mod;

//     if(coins[idx]<=target)ans = ((ans%mod) + (solve(idx,target-coins[idx]))%mod)%mod;
//     return dp[idx][target]=ans%mod;
// }

// int main(){
//     optimize();
//     cin>>n>>x;
//     dp.assign(n+1,vector<int>(x+1,-1));
//     coins.resize(n);
//     for(int i=0;i<n;i++)cin>>coins[i];
//     cout<<solve(0,x)<<endl;
//     return 0;
// }