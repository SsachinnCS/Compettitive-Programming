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

long long a[N];
long long b[N];

long long pre1[N],pre2[N];
void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=a[i];
        pre1[i] = pre1[i-1]+a[i];
    }

    sort(b+1,b+1+n);
    for(int i=1;i<=n;i++){
        pre2[i]=pre2[i-1]+b[i];
    }

    
    int m;
    cin>>m;
    int  ty,l,r;
    while(m--){
        
        cin>>ty>>l>>r;
        if(ty==1)cout<<pre1[r]-pre1[l-1]<<endl;
        else cout<<pre2[r]-pre2[l-1]<<endl;
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