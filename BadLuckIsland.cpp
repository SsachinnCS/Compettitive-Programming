#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed, ios::floatfield);
#define ll long long

double dp[105][105][105];

double rf(int r,int s,int p){
    if(r==0 || s==0)return 0.0;
    if(p==0)return 1.0;
    if(dp[r][s][p] > -0.9) return dp[r][s][p];

    double ans = 0.0;
    double total = r*s + s*p + r*p ;

    ans+= rf(r,s-1,p)*((r*s)/total);
    ans+= rf(r-1,s,p)*((r*p)/total);
    ans+= rf(r,s,p-1)*((s*p)/total);

    return dp[r][s][p] =ans;
}

double sf(int r,int s,int p){
    if(r==0)return 1.0;
    if(p==0 || s==0)return 0.0;
    if(dp[r][s][p] > -0.9) return dp[r][s][p];

    double ans = 0.0;
    double total = r*s + s*p + r*p ;

    ans+= sf(r,s-1,p)*((r*s)/total);
    ans+= sf(r-1,s,p)*((r*p)/total);
    ans+= sf(r,s,p-1)*((s*p)/total);

    return dp[r][s][p] =ans;
}

double pf(int r,int s,int p){
    if(r==0 || p==0)return 0.0;
    if(s==0)return 1.0;
    if(dp[r][s][p] > -0.9) return dp[r][s][p];

    double ans = 0.0;
    double total = r*s + s*p + r*p ;

    ans+= pf(r,s-1,p)*((r*s)/total);
    ans+= pf(r-1,s,p)*((r*p)/total);
    ans+= pf(r,s,p-1)*((s*p)/total);

    return dp[r][s][p] =ans;
}

int main(){
    int r,s,p;
    cin>>r>>s>>p;

    memset(dp,-1.0,sizeof dp);
    double rans = rf(r,s,p);
    memset(dp,-1.0,sizeof dp);
    double sans = sf(r,s,p);
    memset(dp,-1.0,sizeof dp);
    double pans = pf(r,s,p);
    
    cout << fixed << setprecision(9);
    cout<<rans<<" "<<sans<<" "<<pans<<endl;
    
    }

