#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;


int main(){
    optimize();

    ll n;
    cin>>n;

    set<ll>st;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        st.insert(a);
    }
    cout<<st.size()<<endl;
    return 0;
}