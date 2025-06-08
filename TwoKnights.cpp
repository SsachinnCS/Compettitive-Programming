#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;

int main(){

    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++){
        ll total  = (i*i) * (i*i-1)/2;
        ll attack =4 * (i-1) * (i-2); 
        cout<<total-attack<<endl;
    }
    return 0;
}


