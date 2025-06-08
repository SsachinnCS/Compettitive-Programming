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

    vector<pair<int,int>>events;
    for(int i = 0 ;i<n;i++){
        int a,b;
        cin>>a>>b;

        events.push_back({a,1});
        events.push_back({b,-1});
    }
    sort(events.begin(),events.end());
    int mxcnt = 0,crnt(0);
    for(auto [time,person]:events){
        crnt+=person;
        mxcnt = max(crnt,mxcnt);
    }
    cout<<mxcnt<<endl;
    return 0;

}