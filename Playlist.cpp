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

    vector<ll>arr(n);
    for(auto &a : arr)cin>>a;

    set<ll>seen;
    ll mxcnt = 0,l=0;

    for(ll r=0;r<n;++r){
      while(seen.count(arr[r])){
         seen.erase(arr[l]);
         l++;
      }
      seen.insert(arr[r]);
      mxcnt = max(mxcnt,r-l+1);
    }

    cout<<mxcnt<<endl;
    return 0;
   
}