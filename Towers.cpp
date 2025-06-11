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

    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
        
    }

  multiset<int>tower;
  for(auto a:arr){
    auto it = tower.upper_bound(a);
    if(it != tower.end()){
        tower.erase(it);
    }
    tower.insert(a);
  }


    cout<<tower.size()<<endl;
    return 0;

 }