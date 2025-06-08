#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;




int main() {
    optimize();
    ll n, m;
    cin >> n >> m;

    multiset<int>ticket;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ticket.insert(a);
    }

    for(int i=0;i<m;i++){
        int offer;
        cin>>offer;

        auto it = ticket.upper_bound(offer);
        if(it==ticket.begin())cout<<-1<<endl;
        else{
            --it;
            cout<<*it<<endl;
            ticket.erase(it);
        }
    }
   
    return 0;
}