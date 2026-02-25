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

void solve() {
    vector<int>arr = {11,81,94,43,3};
    vector<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
            vector<int>temp;
            for(int k=i;k<=j;k++){
                temp.push_back(arr[k]);
            }
            ans.push_back(temp);
        }
    }
    int sum = 0;
    for(auto a:ans){
        int temp = INT_MAX;
        //cout<<"[";
        for(auto b:a)temp=min(b,temp);
        sum+=temp;
        //cout<<"]"<<endl;
    }
    cout<<"sum = "<<sum;
}

int main() {
    optimize();
    
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}