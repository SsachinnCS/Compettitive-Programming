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

const int MAX_NO = 1000005;
bool is_prime[MAX_NO];

void sieve(){
    fill(is_prime,is_prime+MAX_NO,true);
    is_prime[0]=is_prime[1]=false;

    for(int p=2;1LL*p*p <MAX_NO ;p++){
        if(is_prime[p]){
            for(int i=p*p;i<MAX_NO;i+=p)is_prime[i]=false;
        }
    }
}

bool check(ll a){
    if(a<4)return false;
    ll no = round(sqrt(a));
    if(no*no == a && is_prime[no])return true;
    return false;
}

void solve() {
    sieve();
    int n;
    cin>>n;

    while(n--){

        ll a,cnt=0;

        cin>>a;

       if(check(a))cout<<"YES"<<endl;
      
        else cout<<"NO"<<endl;
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