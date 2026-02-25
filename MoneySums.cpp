#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
int n;
vector<int>coins;
vector<vector<int>>dp;
bool solve(int i,int sum) {
    if(sum==0)return true;
    if(i==n)return false;
    if(dp[i][sum]!=-1)return dp[i][sum];
    bool take =false;
    bool skip = solve(i+1,sum);
    if(sum>=coins[i]){
         take = solve(i+1,sum-coins[i]);
    }
    return dp[i][sum]=(take || skip);
}

int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin >> t;
    while(t--) {
        cin>>n;
        coins.resize(n);
        for(int i=0;i<n;i++)cin>>coins[i];
        int sum = accumulate(coins.begin(),coins.end(),0);
        dp.assign(n+1,vector<int>(sum+1,-1));
        vector<int>result;
        for(int i=1;i<=sum;i++){
            if(solve(0,i))result.push_back(i);
        }
        cout<<result.size()<<endl;
        for(auto a:result)cout<<a<<" ";
    }
    
    return 0;
}