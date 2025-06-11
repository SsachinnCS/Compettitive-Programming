#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
const int MOD = 1e9 + 7;

int main(){
    optimize();

    int x,n;
    cin >>x >> n;

    set<int>positions{0,x};
    multiset<int>length{x};

    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        auto it = positions.upper_bound(p);
        int right = *it;
        int left = *prev(it);
        positions.insert(p);
        length.erase(length.find(right-left));
        length.insert(right-p);
        length.insert(p-left);
        cout<<*length.rbegin()<< ' ';

    }

    return 0;
}