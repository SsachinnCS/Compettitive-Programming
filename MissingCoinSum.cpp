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

    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    
    ll sum = 1;
    for(auto a:arr){
        if(a>sum)break;
        sum+=a;
    }
    cout<<sum<<endl;
    return 0;


   
}