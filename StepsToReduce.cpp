#include<bits/stdc++.h>
using namespace std;


#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long
const int MOD = 1e9 + 7;


vector<ll>dp;

int f(int n){

    if(n==1)return 0;
    if(n==2)return 1;
    if(n==3)return 1;

    if(dp[n]!=-1)return dp[n];
    
    return dp[n]=1+min({
        f(n-1),
        (n%2==0 ? f(n/2) : INT_MAX ),
        (n%3==0 ? f(n/3) : INT_MAX ),
    });
}

int main(){
    dp.clear();
    dp.resize(1000,-1);
    int n;
    cin>>n;
    cout<<f(n);
}