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

void solve() {
    int n;
    cin>>n;

    vector<pair<int,int>>days;
    for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    days.push_back({a,b});
    }


    sort(days.begin(),days.end());

    //for(auto a:days)cout<<a.first<<" "<<a.second<<endl;

    int ans=0,prev=-1;
    bool check = 0;
    for(int i=0;i<n;i++){
        if(days[i].second >= prev)prev=days[i].second;
        else {
            prev=days[i].first;
        }
    }

    cout<<prev;



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
        solve();
    }
    
    return 0;
}