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
    int m,s;
    cin>>m>>s;

    if(s==0){
        if(m==1)cout<<"0 0";
        else cout<<"-1 -1";
        return;
    }

    if(s > 9*m){
        cout<<"-1 -1";
        return;
    }

    // Max number

    string max_num = "";
    int cur_sum = s;
    for(int i=0;i<m;i++){
        int d = min(9,cur_sum);
        max_num += to_string(d);
        cur_sum-=d;
    }

    //Min number
    string min_num = "";
    cur_sum = s;
  
    for(int i=0;i<m;i++){
        int lo_bound = 0;
        if(i==0 && m>1)lo_bound=1;

        int rem_len = m-i-1;
        int req_min = cur_sum - (9*rem_len);
        int d = max(req_min,lo_bound);
        min_num+=to_string(d);
        cur_sum-=d;
    }

    cout << min_num << " " << max_num << endl;
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