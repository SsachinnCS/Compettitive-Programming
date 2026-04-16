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
    string s;
    string t;

    cin>>s>>t;
    int cntt = 0,cns =0,cnt =0;
    for(int i=0;i<s.size();i++){
        char a = tolower(s[i]) ;
        char b = tolower(t[i]);

        if(a<b){
            cout<<"-1"<<endl;
            return;
        }

        else if(b<a){
            cout<<1<<endl;
            return;
        }
        
    }
    //cout<<cns<<' '<<cnt<<endl;
    cout<<0<<endl;
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