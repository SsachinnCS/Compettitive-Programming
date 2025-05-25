#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

const int MOD = 1e9 + 7;

vector<ll>dp(1000005,-1);

ll f(int n){
    if(n==0)return 1;
    if(dp[n]!=-1)return dp[n];

    ll sum = 0;
    for(int i=1;i<=6;i++){
        if(n-i <0 )break;
        sum = (sum%MOD + f(n-i)%MOD)%MOD;
    }
    return dp[n]=sum%MOD;
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}