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

    ll crn = arr[0],mxcnt=arr[0];
    for(int i=1;i<n;i++){
        crn = max(arr[i],arr[i]+crn);
        mxcnt = max(mxcnt,crn);
    }
    cout<<mxcnt<<endl;
    return 0;

}