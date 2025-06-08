#include <bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;
 
 
 
 
int main() {
    optimize();
 
    int n;
    cin>>n;
 
    vector<int>arr(n);
    ll sum=0,cnt(0);
    for(auto &a:arr){
        cin>>a;
        
    }
    sort(arr.begin(),arr.end());
    int mid = arr[n/2];
    for(auto a:arr){
        sum+=abs(mid-a);
    }
 
    cout<<sum<<endl;
    return 0;
}