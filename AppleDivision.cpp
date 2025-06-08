#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

int main(){
    optimize();

    int n;
    cin >> n;

    vector<int> apples(n);
    vector<ll> prefix(n + 1, 0);  

    for (int i = 0; i < n; i++) {
        cin >> apples[i];
        
    }
    ll mindiff = INF;
    int totalCombinations = 1 << n;

    for(int mask = 0;mask< totalCombinations ;mask++){
        ll sum1 = 0,sum2=0;

        for(int i=0;i<n;i++){
            if(mask & (1<<i)){
                sum1+=apples[i];
            }
            else sum2+=apples[i];
        }
        ll diff = abs(sum1-sum2) ;
        mindiff = min(mindiff,diff);
    }

    // for (auto a : arr1) cout << a << " ";
    // cout << "\n";

    // for (int i = 1; i <= n; i++) cout << prefix[i] << " ";
    // cout << "\n";
    cout<<mindiff<<endl;

    return 0;
}
