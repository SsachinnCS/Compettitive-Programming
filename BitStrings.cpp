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

    ll result = 1;

    for(int i=0;i<n;i++){
        result=(result*2)%MOD;
    }
    cout<<result<<endl;
    return 0;

}