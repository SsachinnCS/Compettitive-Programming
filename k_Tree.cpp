#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;





int main() {

    int n,k,d;
    cin>>n>>k>>d;

    vector<int>dp1(n+1,0),dp2(n+1,0);
    dp1[0]=dp2[0]=1;

    for(int i=1;i<=n;++i){
        for(int j=1;j<=k;++j){
            if(i-j >=0)dp1[i]=(dp1[i]+dp1[i-j])%MOD;
        }
    }

    for(int i=1;i<=n;++i){
        for(int j=1;j<d;++j){
            if(i-j >=0)dp2[i]=(dp2[i]+dp2[i-j])%MOD;
        }
    }

    int ans = ((dp1[n]-dp2[n])+MOD)%MOD;
    cout<<ans<<endl;
    return 0;

}