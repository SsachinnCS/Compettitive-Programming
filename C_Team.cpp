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
    int n,m;
    cin>>n>>m;

    if(n>m+2){
        cout<<-1;
        return;
    }

    if(m > n*2){
        cout<<-1;
        return;
    }

    string ans = "";
    int i=0,j=0;
    while(i<n && j<m){
        if(i<n){
            ans+='0';
            i++;
        }

        if(j<m){
            ans+='1';
            j++;
        }
    }

    //  if( (n-i)>(m+2)){
    //     cout<<-1;
    //     return;
    // }

    // if((m-j) > ((n-i)*2)){
    //     cout<<-1;
    //     return;
    // }

    while(i<n)ans+='0';
    while(j<m)ans+='1';
    cout<<ans;
    
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