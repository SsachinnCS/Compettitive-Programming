
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

    int solve(vector<int>& s1,vector<int>& s2,int i,int j,vector<vector<int>>& dp){
        if(i==0 || j==0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];

        if(s1[i-1]==s2[j-1])return dp[i][j]=1+solve(s1,s2,i-1,j-1,dp);
        return dp[i][j]=max(solve(s1,s2,i-1,j,dp),solve(s1,s2,i,j-1,dp));
    }

int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int s1,s2;
    cin>>s1>>s2;
    vector<int>arr1(s1),arr2(s2);
    for(int i=0;i<s1;i++)cin>>arr1[i];
    for(int i=0;i<s2;i++)cin>>arr2[i];
    vector<vector<int>>dp(s1+1,vector<int>(s2+1,-1));
    int lcs_len = solve(arr1,arr2,s1,s2,dp);
    //cout<<"<-ans->"<<dp[s1][s2]<<"<-ans->"<<endl;
    cout<<lcs_len<<endl;

    // printing lcs

    vector<int>lcs;
    int i=s1,j=s2;

    while(i>0 && j>0){
        if(arr1[i-1]==arr2[j-1]){
            lcs.push_back(arr1[i-1]);
            i--;j--;
        }
        else {
            if(solve(arr1,arr2,i-1,j,dp) > solve(arr1,arr2,i,j-1,dp))i--;
            else j--;
        }
    }
    reverse(lcs.begin(),lcs.end());
    for(auto a:lcs)cout<<a<<" ";
    
    return 0;
}




 