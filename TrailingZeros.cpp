#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

int main(){
    optimize();

    int n;
    cin>>n;

    ll result = 0;

    for(ll i=5;i<=n;i *= 5){
        result+=n/i;
    }
    cout<<result<<endl;
    return 0;
}