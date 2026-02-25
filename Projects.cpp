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

struct Project
{
    ll s,e,p;
};


int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;
    vector<Project>proj(n);
    for(int i=0;i<n;i++)cin>>proj[i].s>>proj[i].e>>proj[i].p;

    sort(all(proj),[](auto &a,auto &b){return a.e < b.e;});
    

    vector<ll>dp(n+1,0);
    vector<ll>ends(n);

    for(int i=0;i<n;i++)ends[i]=proj[i].e;
    for(int i=1;i<=n;i++){
        ll take = proj[i-1].p;
        int idx = upper_bound(all(ends),proj[i-1].s-1)-ends.begin();
        take +=dp[idx];
        dp[i]=max(dp[i-1],take);
    }
    cout<<dp[n]<<endl;
    return 0;
}