#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N = 1e5 + 10;
const int INF = 1e9 + 10;


int main(){
    ll t;
    cin>>t;

    while(t--){
        ll x,y;
        cin>>y>>x;

        ll z = max(x,y),ans(0);
        
        if(z%2==0){
            if(z==y)ans=((z*z) - x) +1 ;
            else ans = (z-1)*(z-1) + y;
        }

        else{
            if(z==x)ans=((z*z) - y) +1 ;
            else ans = (z-1)*(z-1) + x;
        }
        cout<<ans<<endl;

    }
}