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


vector<int>dp;
int get(int n){
    int ans = INT_MIN;
    while(n>0){
        int a = n%10;
        ans = max(ans,a);
        n/=10;
    }
    return ans;

}

// vector<int>get1(int n){
//     vector<int>ans;
//      while(n>0){
//         int a = n%10;
//         ans.push_back(a);
//         n/=10;
//     }
//     return ans;
// }

int solve(int n) {
    /* Your code here */

    if(n==0)return 0;
    if(n<=9)return 1;
    if(dp[n]!=-1)return dp[n];
    
    // int ways = INF;
    // vector<int>mno = get1(n);
    // for(auto d:mno){
    //     //int mno = get(n);
    //     if(d>0)ways = min(ways,1+solve(n-d));
    //     //ways = min(ways,1+solve(n-mno));
        
    // }

      int ways = INF;
    int mno = get(n);
   
        //int mno = get(n);
        if(mno>0)ways = min(ways,1+solve(n-mno));
        //ways = min(ways,1+solve(n-mno));
        
    

    return dp[n]=ways;
    
}

int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;
    dp.assign(n+1,-1);
    cout<<solve(n);
    
    return 0;
}