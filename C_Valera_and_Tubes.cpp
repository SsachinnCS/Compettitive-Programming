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
    int n,m,k;
    cin>>n>>m>>k;
    int pri =0;
    int prj =0;
    vector<int>ans;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=m+1;j++){
            
            if(abs(i-pri) + abs(j-prj) == 1){
                //cout<<pri<<" "<<prj<<" ";
                ans.push_back(pri);ans.push_back(prj);
            }
            pri = i;
            prj = j;
            
        }

        int cnt = 0;

        cout<<p;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
            if((i+1)%p == 0){cout<<endl;cout<<p;}
        }
        cout<<endl;
    }
    

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