#include<bits/stdc++.h>
using namespace std;
const int N = 1000005;
int h[N];
int dp[N];

int funn(int i,int k){
    if(i==0)return 0;
    if(dp[i]!=-1)return dp[i];

    int cost = INT_MAX;

   for(int j=1;j<=k;j++){
    if(i-j >=0)
    cost = min(cost,funn(i-j,k)+abs(h[i]-h[i-j]));
   }
    //cost = min(cost,funn(i-1)+abs(h[i]-h[i-1]));

    //if(i>1)cost = min(cost,funn(i-2)+abs(h[i]-h[i-2]));
    return dp[i]=cost;
}

int main(){
    int n,k;
    cin>>n>>k;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    cout<<funn(n-1,k);
}