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

    vector<pair<int,int>>movie(n);
    for(int i=0;i<n;i++){
        cin>>movie[i].first>>movie[i].second;
    }

    sort(movie.begin(),movie.end(),[](auto &a ,auto &b){
        return a.second<b.second;
    });

    int endti = 0,cnt(0);
    for(auto &[a,b]:movie){
        if(a>=endti){cnt++;
        endti = b;}
    }
    cout<<cnt<<endl;
    return 0;

}